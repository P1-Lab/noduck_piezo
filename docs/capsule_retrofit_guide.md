<div>

<h2>capsule_retrofit_guide.md</h2>

<h3>1. Scope</h3>

<p>
This guide defines the protocol for replacing standard adhesive-based piezoelectric sensors with a Sovereign Capsule in high-value acoustic and hybrid instruments.
The objective is restoration of Material Authority through elimination of stochastic transduction artifacts commonly described as “quack.”
</p>

<hr>

<h3>2. Required Tools and Materials</h3>

<ul>
  <li><strong>Sovereign Capsule Node:</strong> Fully assembled per capsule assembly specification</li>
  <li><strong>Precision Forstner Bit:</strong> 38.0 mm diameter matching capsule outer geometry</li>
  <li><strong>Structural Adhesive:</strong> High-modulus epoxy (Shore hardness > 80D)</li>
  <li><strong>JFET Buffer Assembly:</strong> Pre-built PCB module per mini-node layout specification</li>
</ul>

<hr>

<h3>3. Site Selection</h3>

<p>
Capsule placement is determined by mechanical nodal behavior of the instrument body.
Selection is not aesthetic; it is structural.
</p>

<ul>
  <li><strong>Primary Location:</strong> Bridge plate or high-density bracing intersection</li>
  <li><strong>Boundary Requirement:</strong> Surface must be planar to ensure full material contact with capsule base</li>
</ul>

<hr>

<h3>4. Installation Protocol</h3>

<table>
  <tr>
    <th>Stage</th>
    <th>Procedure</th>
    <th>Functional Requirement</th>
  </tr>

  <tr>
    <td>I. Cavity Preparation</td>
    <td>Machine a 38.0 mm flat-bottom recess to 2.0 mm depth</td>
    <td>Defines physical boundary for capsule housing integration</td>
  </tr>

  <tr>
    <td>II. Dry Fit</td>
    <td>Verify capsule seating without lateral movement or tilt</td>
    <td>Prevents air-gap formation and stochastic vibration artifacts</td>
  </tr>

  <tr>
    <td>III. Mechanical Bonding</td>
    <td>Apply thin epoxy layer to wood interface and seat capsule</td>
    <td>Creates unified mechanical mass between instrument and sensor</td>
  </tr>

  <tr>
    <td>IV. Pressure Curing</td>
    <td>Maintain constant pressure during 24-hour cure cycle</td>
    <td>Ensures stabilization of 48 Hz resonant structure</td>
  </tr>
</table>

<hr>

<h3>5. Signal Integration</h3>

<ul>
  <li><strong>Shielding:</strong> Metallic capsule housing must be tied to signal ground for Faradaic isolation</li>
  <li><strong>Impedance Path:</strong> Direct routing into 10 MΩ JFET buffer input stage</li>
  <li><strong>Output Calibration:</strong> Final signal must be normalized through Sovereign Kernel processing layer</li>
</ul>

<hr>

<h3>6. Validation</h3>

<p>
Post-installation, the instrument must undergo mechanical verification.
</p>

<ul>
  <li>Bridge excitation must produce a linear and repeatable response</li>
  <li>High-frequency “quack” artifacts must be eliminated</li>
  <li>Low-frequency structural modes must remain intact as Deep Time transients</li>
</ul>

<hr>

<p>
<strong>Constraint Statement:</strong><br>
Modification of high-value instruments requires adherence to the Architecture of Necessity.
This protocol prioritizes physical mass coupling over electronic correction or post-processing compensation.
</p>

</div>
