<div>

<h2>material_specs.md</h2>

<h3>1. Objective</h3>

<p>
This document specifies material requirements for the Sovereign Capsule housing system.
Material selection defines the mechanical boundary conditions of the transduction system, influencing inertia, damping, and coupling efficiency between instrument body and sensor assembly.
</p>

<hr>

<h3>2. Material Properties and Mass Characteristics</h3>

<p>
The housing is defined as a cylindrical capsule with 38.0 mm outer diameter and 1.5 mm wall thickness.
Material choice determines the effective inertial behavior of the enclosure within the signal chain.
</p>

<table>
  <tr>
    <th>Material</th>
    <th>Density (g/cm³)</th>
    <th>Approx. Housing Mass</th>
    <th>Mechanical Characteristic</th>
  </tr>

  <tr>
    <td>Zinc (Alloy 3)</td>
    <td>~6.60</td>
    <td>~42 g</td>
    <td>Higher internal damping; reduces structural resonance and smooths transient response</td>
  </tr>

  <tr>
    <td>Brass (C360)</td>
    <td>~8.50</td>
    <td>~54 g</td>
    <td>Higher stiffness and inertia; increases mechanical coupling and structural definition</td>
  </tr>
</table>

<hr>

<h3>3. Selection Criteria</h3>

<ul>
  <li><strong>Inertial Baseline:</strong> Minimum housing mass (~40 g) required to ensure stable mechanical coupling between transducer and enclosure.</li>

  <li><strong>Damping Behavior:</strong> Zinc is preferred where reduced resonance coloration is desired.</li>

  <li><strong>Structural Definition:</strong> Brass is preferred where stronger coupling and higher rigidity are required.</li>
</ul>

<hr>

<h3>4. Boundary Conditions</h3>

<p>
The capsule base must be mechanically bonded to a wooden substrate (Baltic Birch or Mahogany).
This establishes the primary mechanical interface between the enclosure and the piezo transducer system.
</p>

<p>
The wood layer functions as an impedance bridge between the rigid metallic housing and the sensing element.
</p>

<hr>

<h3>5. Electrical and Mechanical Constraints</h3>

<ul>
  <li><strong>Conductivity:</strong> Metallic housing may be left raw or finished with conductive coating to maintain shielding continuity where required.</li>

  <li><strong>Sourcing Tolerance:</strong> Material variability must remain within acceptable density and structural tolerances to ensure consistent mechanical behavior across builds.</li>

  <li><strong>System Interaction:</strong> Material properties interact with the full signal chain, including the 10 MΩ high-impedance buffer and downstream kernel processing stage.</li>
</ul>

<hr>

<p>
<strong>Design Note:</strong><br>
Material selection defines the mechanical boundary conditions of the system rather than dictating specific acoustic outcomes.
System response emerges from the interaction between material inertia, coupling geometry, and signal processing layers.
</p>

<hr>

<p>
<strong>Constraint Statement:</strong><br>
Material selection is a functional engineering decision governing mechanical behavior, not an aesthetic or symbolic choice.
</p>

</div>
