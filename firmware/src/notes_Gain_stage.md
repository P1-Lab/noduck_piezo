<div>

<h2>gain_stage_calibration.h</h2>

<h3>1. Objective</h3>

<p>
This header file defines fixed-point coefficients and scaling factors for the Sovereign Kernel gain stage.
Its purpose is to preserve the integrity of the 48 Hz Resonant Anchor by eliminating floating-point drift and ensuring deterministic processing of signal data originating from the 35 mm brass sensor system.
</p>

<hr>

<h3>2. Fixed-Point System Definition</h3>

<p>
The system uses a Q16.16 fixed-point representation to encode physical constants in a deterministic format suitable for low-power microcontrollers.
This ensures O(1) execution complexity and removes dependency on floating-point hardware variability.
</p>

<pre>
#ifndef GAIN_STAGE_CALIBRATION_H
#define GAIN_STAGE_CALIBRATION_H

/**
 * FIXED_POINT_SCALING
 * 1.0 is represented as 65536 (2^16)
 */
#define Q_SHIFT 16
#define FLOAT_TO_Q(x) ((int32_t)((x) * (1 << Q_SHIFT)))
</pre>

<hr>

<h3>3. Physical Constants</h3>

<table>
  <tr>
    <th>Constant</th>
    <th>Fixed-Point Value</th>
    <th>Physical Meaning</th>
  </tr>

  <tr>
    <td>MASS_ZINC_Q</td>
    <td>FLOAT_TO_Q(42.0)</td>
    <td>Zinc capsule mass (grams)</td>
  </tr>

  <tr>
    <td>MASS_BRASS_Q</td>
    <td>FLOAT_TO_Q(54.0)</td>
    <td>Brass capsule mass (grams)</td>
  </tr>

  <tr>
    <td>RESONANT_ANCHOR_Q</td>
    <td>FLOAT_TO_Q(48.0)</td>
    <td>Fundamental structural resonance frequency (Hz)</td>
  </tr>

  <tr>
    <td>GAIN_COEFFICIENT</td>
    <td>FLOAT_TO_Q(1.25)</td>
    <td>Voltage-to-force normalization factor</td>
  </tr>

  <tr>
    <td>INERTIA_THRESHOLD</td>
    <td>FLOAT_TO_Q(0.98)</td>
    <td>Mechanical damping stability constant</td>
  </tr>
</table>

<pre>
#endif // GAIN_STAGE_CALIBRATION_H
</pre>

<hr>

<h3>4. Forensic Rationale</h3>

<ul>
  <li><strong>Mass Compensation:</strong> Coefficients are derived directly from physical capsule mass, linking software behavior to mechanical inertia.</li>

  <li><strong>Vitrification Principle:</strong> Values are non-stochastic and must remain fixed to preserve deterministic system behavior.</li>

  <li><strong>Impedance Alignment:</strong> Assumes operation with a 10 MΩ JFET input buffer as part of the Mechanical Nexus architecture.</li>
</ul>

<hr>

<h3>5. System Dependency</h3>

<p>
These constants are consumed by the Sovereign_Kernel_Core execution layer to enforce the Law of Transduction.
The resulting output represents a deterministic mapping of physical displacement into digital representation.
</p>

<hr>

<p>
<strong>Constraint Statement:</strong><br>
Modification of these coefficients without corresponding physical hardware changes invalidates the system model and breaks compliance with the Architecture of Necessity.
</p>

</div>
