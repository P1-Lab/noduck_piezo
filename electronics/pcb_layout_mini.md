<div>

<h2>pcb_layout_mini.md</h2>

<h3>1. Objective</h3>

<p>
This document defines the physical and electrical constraints for the Sovereign Mini-Node PCB.
The JFET buffer must reside within or immediately adjacent to the Lipstick capsule to preserve Faradaic isolation and maintain deterministic signal behavior.
</p>

<p>
The layout is therefore optimized for a compact circular footprint with strict mechanical coupling to the capsule architecture.
</p>

<hr>

<h3>2. Physical Design Constraints</h3>

<ul>
  <li><strong>Form Factor:</strong> Circular PCB</li>
  <li><strong>Maximum Diameter:</strong> 32.0 mm (clearance fit within 35.0 mm internal capsule diameter)</li>
  <li><strong>Substrate:</strong> FR4, 1.6 mm thickness</li>
  <li><strong>Copper Weight:</strong> 1 oz standard copper for controlled impedance and manufacturability</li>
</ul>

<hr>

<h3>3. Layer Stackup and Routing</h3>

<table>
  <tr>
    <th>Layer</th>
    <th>Function</th>
    <th>Technical Requirement</th>
  </tr>

  <tr>
    <td>Top Layer</td>
    <td>Signal Routing / Components</td>
    <td>SMT (0805) or through-hole JFET placement permitted</td>
  </tr>

  <tr>
    <td>Bottom Layer</td>
    <td>Ground Plane</td>
    <td>Continuous copper pour to establish deterministic reference for 10 MΩ boundary</td>
  </tr>

  <tr>
    <td>Trace Width</td>
    <td>Signal Routing Constraint</td>
    <td>0.25 mm minimum for low-current signal integrity</td>
  </tr>

  <tr>
    <td>Isolation</td>
    <td>High-Impedance Protection</td>
    <td>0.50 mm minimum spacing around Gate node to prevent parasitic leakage</td>
  </tr>
</table>

<hr>

<h3>4. Component Placement Topology</h3>

<ol>
  <li><strong>Central Node:</strong> JFET (J201 / LSK170) placed at geometric center to minimize input path length.</li>

  <li><strong>Gate Boundary:</strong> 10 MΩ resistor placed immediately adjacent to Gate terminal to stabilize impedance before environmental interference.</li>

  <li><strong>Peripheral I/O:</strong> Power and signal pads distributed at opposing edges (0° / 180° axis) for direct capsule exit routing.</li>
</ol>

<hr>

<h3>5. Mechanical Integration</h3>

<ul>
  <li><strong>Mounting Method:</strong> Non-conductive adhesive or press-fit retention within metallic housing</li>
  <li><strong>Input Interface:</strong> Direct solder connection to 35 mm brass piezo leads (connectorless design)</li>
</ul>

<hr>

<p>
<strong>Design Constraint:</strong><br>
The PCB is not an independent subsystem. It is a mechanically coupled transduction layer integrated into the capsule mass system.
</p>

<hr>

<p>
<strong>Note:</strong><br>
This specification defines the geometric and electrical precursor to the STEP model and PCB fabrication files.
Compliance is mandatory to maintain the Architecture of Necessity, including mass, boundary, and impedance constraints.
</p>

</div>
