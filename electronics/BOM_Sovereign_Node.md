<div>

<h2>BOM_Sovereign_Node.md</h2>

<h3>1. Scope</h3>

<p>
This Bill of Materials defines the discrete components required to assemble one Sovereign Node (Capsule + Buffer).
All components are selected to maintain a high-impedance deterministic signal path and preserve the 48 Hz Resonant Anchor.
</p>

<hr>

<h3>2. Transducer Assembly</h3>

<table>
  <tr>
    <th>Component</th>
    <th>Specification</th>
    <th>Quantity</th>
    <th>Purpose</th>
  </tr>

  <tr>
    <td>Piezo Element</td>
    <td>35 mm Brass Substrate</td>
    <td>1</td>
    <td>Primary mechanical sensor</td>
  </tr>

  <tr>
    <td>Capsule Housing</td>
    <td>38 mm OD Zinc or Brass Lipstick Form Factor</td>
    <td>1</td>
    <td>Mechanical inertia and shielding</td>
  </tr>

  <tr>
    <td>Material Base</td>
    <td>2 mm Baltic Birch or Mahogany Disc</td>
    <td>1</td>
    <td>Wood-on-wood impedance bridge</td>
  </tr>

  <tr>
    <td>Hookup Wire</td>
    <td>28 AWG Shielded Twisted Pair (Low Capacitance)</td>
    <td>15 cm</td>
    <td>Internal signal transmission</td>
  </tr>
</table>

<hr>

<h3>3. No-Quack JFET Buffer (Front-End)</h3>

<p>
This subsystem forms a 10 MΩ high-impedance buffer designed to stabilize and preserve piezo transduction behavior.
</p>

<table>
  <tr>
    <th>Component</th>
    <th>Value / Part</th>
    <th>Quantity</th>
    <th>Requirement</th>
  </tr>

  <tr>
    <td>JFET</td>
    <td>J201 or LSK170</td>
    <td>1</td>
    <td>Low-noise high-impedance amplification</td>
  </tr>

  <tr>
    <td>Gate Resistor</td>
    <td>10 MΩ</td>
    <td>1</td>
    <td>Defines input boundary impedance</td>
  </tr>

  <tr>
    <td>Source Resistor</td>
    <td>1 kΩ (Metal Film, 1%)</td>
    <td>1</td>
    <td>Bias stability</td>
  </tr>

  <tr>
    <td>Drain Resistor</td>
    <td>10 kΩ (Metal Film, 1%)</td>
    <td>1</td>
    <td>Linear output gain stage</td>
  </tr>

  <tr>
    <td>Input Capacitor</td>
    <td>10 nF Polypropylene</td>
    <td>1</td>
    <td>DC blocking with minimal phase shift</td>
  </tr>

  <tr>
    <td>Output Capacitor</td>
    <td>1 µF Film or Tantalum</td>
    <td>1</td>
    <td>Preserves low-frequency transient response</td>
  </tr>
</table>

<hr>

<h3>4. Hardware & Enclosure</h3>

<table>
  <tr>
    <th>Item</th>
    <th>Specification</th>
    <th>Quantity</th>
    <th>Purpose</th>
  </tr>

  <tr>
    <td>PCB</td>
    <td>Sovereign Mini-Node PCB v1.0</td>
    <td>1</td>
    <td>Component mounting and routing</td>
  </tr>

  <tr>
    <td>Connector</td>
    <td>TRS 1/4" or TA3 Mini-XLR</td>
    <td>1</td>
    <td>Balanced output interface</td>
  </tr>

  <tr>
    <td>Adhesive</td>
    <td>Structural Epoxy (>80D Shore Hardness)</td>
    <td>1</td>
    <td>Permanent mechanical bonding</td>
  </tr>
</table>

<hr>

<p>
<strong>Note:</strong><br>
Substitution of the 10 MΩ gate resistor or the 35 mm brass substrate introduces stochastic signal deviation and reintroduces piezoelectric "quack".
Component consistency is mandatory for compliance with the Architecture of Necessity.
</p>

</div>
