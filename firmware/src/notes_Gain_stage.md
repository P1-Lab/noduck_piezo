<div>

<h2>gain_stage_calibration.h</h2>

<h3>1. Objective</h3>

<p>
This header defines fixed-point scaling and calibration constants for the Sovereign Kernel gain stage.
It is designed for deterministic execution on embedded targets where floating-point behavior is either unavailable, inconsistent, or non-deterministic across toolchains.
</p>

<p>
The constants herein support stable modeling of a mechanically coupled piezo transduction system based on a high-impedance 10 MΩ JFET front end and mass-loaded capsule geometry.
</p>

<hr>

<h3>2. Fixed-Point System Definition</h3>

<p>
The system uses Q16.16 fixed-point representation for efficient integer arithmetic on microcontrollers without hardware floating-point units or where deterministic timing is required.
</p>

<pre>
#ifndef GAIN_STAGE_CALIBRATION_H
#define GAIN_STAGE_CALIBRATION_H

/**
 * Fixed-point scaling (Q16.16)
 * 1.0 = 65536 = 2^16
 */
#define Q_SHIFT 16
#define FLOAT_TO_Q(x) ((int32_t)((x) * (1 << Q_SHIFT)))
</pre>

<hr>

<h3>3. Calibration Constants</h3>

<table>
  <tr>
    <th>Constant</th>
    <th>Value</th>
    <th>Interpretation</th>
  </tr>

  <tr>
    <td>MASS_ZINC_Q</td>
    <td>FLOAT_TO_Q(42.0f)</td>
    <td>Reference capsule mass (zinc housing)</td>
  </tr>

  <tr>
    <td>MASS_BRASS_Q</td>
    <td>FLOAT_TO_Q(54.0f)</td>
    <td>Reference capsule mass (brass housing)</td>
  </tr>

  <tr>
    <td>RESONANT_ANCHOR_Q</td>
    <td>FLOAT_TO_Q(48.0f)</td>
    <td>Design target low-frequency resonance reference (Hz domain parameter)</td>
  </tr>

  <tr>
    <td>GAIN_COEFFICIENT</td>
    <td>FLOAT_TO_Q(1.25f)</td>
    <td>Input normalization scaling factor</td>
  </tr>

  <tr>
    <td>INERTIA_THRESHOLD</td>
    <td>FLOAT_TO_Q(0.98f)</td>
    <td>Damping coefficient for stability of integration stage</td>
  </tr>
</table>

<pre>
#endif // GAIN_STAGE_CALIBRATION_H
</pre>

<hr>

<h3>4. Design Notes</h3>

<ul>
  <li><strong>Deterministic Execution:</strong> Fixed-point arithmetic ensures consistent behavior across embedded toolchains and targets.</li>

  <li><strong>Physical Mapping:</strong> Mass and resonance constants act as calibration anchors for downstream signal modeling, not literal physical enforcement.</li>

  <li><strong>System Dependency:</strong> Intended for use with a high-impedance JFET front-end (10 MΩ class) and mechanically coupled piezo transducers.</li>
</ul>

<hr>

<h3>5. Constraint Statement</h3>

<p>
These constants define a calibration layer between physical transduction hardware and digital signal modeling.
Changes to these values should be treated as system-level recalibration rather than arbitrary parameter tuning.
</p>

</div>
