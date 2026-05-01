<div style="font-family: sans-serif; max-width: 900px; line-height: 1.6; color: #1a1a1a; border: 1px solid #111; padding: 30px; background-color: #ffffff;">

  <div style="border-bottom: 2px solid #000; padding-bottom: 10px; margin-bottom: 25px;">
    <h1 style="margin: 0; font-size: 1.5rem; letter-spacing: 0.05em; text-transform: uppercase;">
      Mini-Node PCB Layout Specification
    </h1>
  </div>

  <h2 style="font-size: 1.1rem; text-transform: uppercase;">1. Objective</h2>

  <p>
    This document defines the physical and electrical layout constraints for a compact high-impedance piezo buffer PCB designed for integration inside a cylindrical transducer housing.
  </p>

  <p>
    The PCB functions as a JFET-based buffer stage directly coupled to a piezoelectric element.
  </p>

  <hr style="border: none; border-top: 1px solid #ddd; margin: 25px 0;" />

  <h2 style="font-size: 1.1rem; text-transform: uppercase;">2. Mechanical Constraints</h2>

  <ul>
    <li><strong>Form Factor:</strong> Circular PCB</li>
    <li><strong>Maximum Diameter:</strong> 32.0 mm (fits within 35.0 mm housing cavity)</li>
    <li><strong>Substrate:</strong> FR4, 1.6 mm</li>
    <li><strong>Copper Weight:</strong> 1 oz standard</li>
  </ul>

  <p>
    The PCB is mechanically constrained by the transducer housing and must maintain stable coupling to the piezo element.
  </p>

  <hr style="border: none; border-top: 1px solid #ddd; margin: 25px 0;" />

  <h2 style="font-size: 1.1rem; text-transform: uppercase;">3. Layer Stackup</h2>

  <table style="width: 100%; border-collapse: collapse; margin-bottom: 25px;">
    <tr>
      <th style="text-align: left; border-bottom: 2px solid #000; padding: 8px;">Layer</th>
      <th style="text-align: left; border-bottom: 2px solid #000; padding: 8px;">Function</th>
      <th style="text-align: left; border-bottom: 2px solid #000; padding: 8px;">Requirement</th>
    </tr>
    <tr>
      <td style="padding: 8px;">Top Layer</td>
      <td style="padding: 8px;">Signal + Components</td>
      <td style="padding: 8px;">JFET and passive components placed on top side</td>
    </tr>
    <tr>
      <td style="padding: 8px;">Bottom Layer</td>
      <td style="padding: 8px;">Ground Plane</td>
      <td style="padding: 8px;">Continuous copper pour for shielding and reference stability</td>
    </tr>
  </table>

  <hr style="border: none; border-top: 1px solid #ddd; margin: 25px 0;" />

  <h2 style="font-size: 1.1rem; text-transform: uppercase;">4. Layout Rules (High Impedance Design)</h2>

  <ul>
    <li>Gate node trace length must be minimized</li>
    <li>Minimum spacing: 0.5 mm around high impedance input nodes</li>
    <li>Minimum trace width: 0.25 mm (signal routing)</li>
    <li>Ground plane must remain continuous under all non-isolated regions</li>
  </ul>

  <p>
    These constraints reduce leakage and parasitic capacitance at the input stage.
  </p>

  <hr style="border: none; border-top: 1px solid #ddd; margin: 25px 0;" />

  <h2 style="font-size: 1.1rem; text-transform: uppercase;">5. Component Placement</h2>

  <ul>
    <li>JFET placed centrally to minimize input path length</li>
    <li>10 MΩ gate resistor placed adjacent to JFET gate pin</li>
    <li>Power and output pads placed on opposite edges of PCB for clean routing</li>
  </ul>

  <hr style="border: none; border-top: 1px solid #ddd; margin: 25px 0;" />

  <h2 style="font-size: 1.1rem; text-transform: uppercase;">6. Mechanical Integration</h2>

  <ul>
    <li>PCB is mounted inside a cylindrical metal housing</li>
    <li>Non-conductive adhesive or press-fit retention used for fixation</li>
    <li>Direct solder connection to piezo element leads (no intermediate connectors)</li>
  </ul>

  <hr style="border: none; border-top: 1px solid #ddd; margin: 25px 0;" />

  <h2 style="font-size: 1.1rem; text-transform: uppercase;">7. Design Summary</h2>

  <p>
    This PCB is a high-impedance analog buffer stage designed for direct integration with a piezoelectric transducer.
  </p>

  <p>
    Its performance depends on both electrical layout and mechanical coupling to the housing system.
  </p>

</div>
