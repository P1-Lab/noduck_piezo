<div style="font-family: sans-serif; max-width: 900px; line-height: 1.6; color: #1a1a1a; border: 1px solid #111; padding: 30px; background-color: #ffffff;">

  <div style="border-bottom: 2px solid #000; padding-bottom: 10px; margin-bottom: 25px;">
    <h1 style="margin: 0; font-size: 1.5rem; letter-spacing: 0.05em; text-transform: uppercase;">
      Bill of Materials: Piezo Capsule + High-Impedance Buffer Node
    </h1>
  </div>

  <p>
    This document defines the components required to construct a high-impedance piezoelectric transducer node consisting of a mechanically mounted capsule and discrete JFET buffer stage.
  </p>

  <p>
    The system is designed to preserve transient response and low-frequency content by minimizing electrical loading and improving mechanical coupling stability.
  </p>

  <hr style="border: none; border-top: 1px solid #ddd; margin: 25px 0;" />

  <h2 style="font-size: 1.1rem; text-transform: uppercase;">Transducer Assembly</h2>

  <table style="width: 100%; border-collapse: collapse; margin-bottom: 25px;">
    <tr>
      <th style="text-align: left; border-bottom: 2px solid #000; padding: 8px;">Component</th>
      <th style="text-align: left; border-bottom: 2px solid #000; padding: 8px;">Specification</th>
      <th style="text-align: left; border-bottom: 2px solid #000; padding: 8px;">Qty</th>
      <th style="text-align: left; border-bottom: 2px solid #000; padding: 8px;">Purpose</th>
    </tr>
    <tr>
      <td style="padding: 8px;">Piezo Element</td>
      <td style="padding: 8px;">35 mm brass-backed disc</td>
      <td style="padding: 8px;">1</td>
      <td style="padding: 8px;">Primary vibration-to-charge transducer</td>
    </tr>
    <tr>
      <td style="padding: 8px;">Housing</td>
      <td style="padding: 8px;">38 mm cylindrical metal capsule</td>
      <td style="padding: 8px;">1</td>
      <td style="padding: 8px;">Mechanical support and shielding</td>
    </tr>
    <tr>
      <td style="padding: 8px;">Mounting Base</td>
      <td style="padding: 8px;">2 mm hardwood (birch or mahogany)</td>
      <td style="padding: 8px;">1</td>
      <td style="padding: 8px;">Mechanical coupling interface</td>
    </tr>
    <tr>
      <td style="padding: 8px;">Wire</td>
      <td style="padding: 8px;">Low-capacitance shielded 28 AWG</td>
      <td style="padding: 8px;">~15 cm</td>
      <td style="padding: 8px;">Internal signal routing</td>
    </tr>
  </table>

  <h2 style="font-size: 1.1rem; text-transform: uppercase;">High-Impedance Buffer Stage</h2>

  <p>
    This stage buffers the piezo element to prevent loading effects and preserve low-frequency response.
  </p>

  <table style="width: 100%; border-collapse: collapse; margin-bottom: 25px;">
    <tr>
      <th style="text-align: left; border-bottom: 2px solid #000; padding: 8px;">Component</th>
      <th style="text-align: left; border-bottom: 2px solid #000; padding: 8px;">Specification</th>
      <th style="text-align: left; border-bottom: 2px solid #000; padding: 8px;">Qty</th>
      <th style="text-align: left; border-bottom: 2px solid #000; padding: 8px;">Purpose</th>
    </tr>
    <tr>
      <td style="padding: 8px;">JFET</td>
      <td style="padding: 8px;">J201 or LSK170</td>
      <td style="padding: 8px;">1</td>
      <td style="padding: 8px;">High-impedance input stage</td>
    </tr>
    <tr>
      <td style="padding: 8px;">Gate Resistor</td>
      <td style="padding: 8px;">10 MΩ metal film</td>
      <td style="padding: 8px;">1</td>
      <td style="padding: 8px;">Input biasing / impedance definition</td>
    </tr>
    <tr>
      <td style="padding: 8px;">Source Resistor</td>
      <td style="padding: 8px;">1 kΩ metal film (1%)</td>
      <td style="padding: 8px;">1</td>
      <td style="padding: 8px;">Bias stabilization</td>
    </tr>
    <tr>
      <td style="padding: 8px;">Drain Resistor</td>
      <td style="padding: 8px;">10 kΩ metal film (1%)</td>
      <td style="padding: 8px;">1</td>
      <td style="padding: 8px;">Output gain setting</td>
    </tr>
    <tr>
      <td style="padding: 8px;">Input Capacitor</td>
      <td style="padding: 8px;">10 nF polypropylene</td>
      <td style="padding: 8px;">1</td>
      <td style="padding: 8px;">DC blocking, low phase distortion</td>
    </tr>
    <tr>
      <td style="padding: 8px;">Output Capacitor</td>
      <td style="padding: 8px;">1 µF film capacitor</td>
      <td style="padding: 8px;">1</td>
      <td style="padding: 8px;">AC coupling to output stage</td>
    </tr>
  </table>

  <h2 style="font-size: 1.1rem; text-transform: uppercase;">Interface Hardware</h2>

  <table style="width: 100%; border-collapse: collapse; margin-bottom: 25px;">
    <tr>
      <th style="text-align: left; border-bottom: 2px solid #000; padding: 8px;">Component</th>
      <th style="text-align: left; border-bottom: 2px solid #000; padding: 8px;">Specification</th>
      <th style="text-align: left; border-bottom: 2px solid #000; padding: 8px;">Qty</th>
      <th style="text-align: left; border-bottom: 2px solid #000; padding: 8px;">Purpose</th>
    </tr>
    <tr>
      <td style="padding: 8px;">PCB</td>
      <td style="padding: 8px;">Single-channel buffer board</td>
      <td style="padding: 8px;">1</td>
      <td style="padding: 8px;">Circuit mounting and routing</td>
    </tr>
    <tr>
      <td style="padding: 8px;">Output Connector</td>
      <td style="padding: 8px;">1/4&quot; TRS or TA3</td>
      <td style="padding: 8px;">1</td>
      <td style="padding: 8px;">Audio interface</td>
    </tr>
    <tr>
      <td style="padding: 8px;">Adhesive</td>
      <td style="padding: 8px;">High-strength epoxy (Shore D &gt; 80)</td>
      <td style="padding: 8px;">As needed</td>
      <td style="padding: 8px;">Mechanical bonding</td>
    </tr>
  </table>

  <h2 style="font-size: 1.1rem; text-transform: uppercase;">Design Notes</h2>

  <ul>
    <li>The 10 MΩ input resistor defines electrical loading conditions of the piezo element.</li>
    <li>Mechanical coupling quality directly affects transient response and low-frequency behavior.</li>
    <li>Housing mass and rigidity influence vibration damping and signal consistency.</li>
  </ul>

  <h2 style="font-size: 1.1rem; text-transform: uppercase;">Substitution Constraints</h2>

  <ul>
    <li>Reducing input impedance below 10 MΩ increases loading and reduces low-frequency response.</li>
    <li>Changing mechanical mounting method significantly alters transient behavior.</li>
  </ul>

  <hr style="border: none; border-top: 1px solid #ddd; margin: 25px 0;" />

  <p>
    <strong>Summary:</strong> This system defines a high-impedance piezo transducer node optimized for consistent mechanical coupling and minimal electrical loading.
  </p>

</div>
