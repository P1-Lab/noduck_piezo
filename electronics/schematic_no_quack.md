<div>

<h2>schematic_no_quack.md</h2>

<h3>1. Circuit Objective</h3>

<p>
This document defines a 10 MΩ high-impedance JFET buffer circuit designed to eliminate piezoelectric “quack” artifacts caused by low-input-impedance loading.
</p>

<p>
Conventional preamps (e.g., 1 MΩ input impedance) introduce resonant peak shifting and low-frequency roll-off, resulting in reduced fidelity and structural loss of the signal.
This circuit preserves the 48 Hz Resonant Anchor by maintaining a stable high-impedance boundary between sensor and amplification stage.
</p>

<hr>

<h3>2. Schematic Diagram</h3>

<pre>
            +9V to +18V DC
                 |
               [R3: 10k]
                 |
  [C1: 10nF]     +-------[C2: 1uF] ---> Output (Forensic Signal)
      ||         |
In >--||---------+ 
      ||         |
           [D]
        [G]  [JFET: J201]
                 |
                 + [S]
    [R1: 10M]    |
        |      [R2: 1k]
        |        |
GND >---+--------+--------------------> GND
</pre>

<hr>

<h3>3. Component Functionality</h3>

<table>
  <tr>
    <th>RefDes</th>
    <th>Component</th>
    <th>Value</th>
    <th>Function</th>
  </tr>

  <tr>
    <td>J1</td>
    <td>JFET</td>
    <td>J201 / LSK170</td>
    <td>High-impedance interface enabling deterministic transduction without loading the piezo source</td>
  </tr>

  <tr>
    <td>R1</td>
    <td>Gate Resistor</td>
    <td>10 MΩ</td>
    <td>Defines input boundary impedance; prevents low-frequency phase distortion</td>
  </tr>

  <tr>
    <td>R2</td>
    <td>Source Resistor</td>
    <td>1 kΩ</td>
    <td>Establishes stable bias current and linear operating region</td>
  </tr>

  <tr>
    <td>R3</td>
    <td>Drain Resistor</td>
    <td>10 kΩ</td>
    <td>Sets output gain structure for downstream signal integrity</td>
  </tr>

  <tr>
    <td>C1</td>
    <td>Input Capacitor</td>
    <td>10 nF</td>
    <td>DC isolation while preserving transient response fidelity</td>
  </tr>

  <tr>
    <td>C2</td>
    <td>Output Capacitor</td>
    <td>1 µF</td>
    <td>Maintains low-frequency energy transfer including 48 Hz mechanical content</td>
  </tr>
</table>

<hr>

<h3>4. Technical Constraints</h3>

<ul>
  <li><strong>Input Impedance:</strong> Must remain fixed at 10 MΩ. Lower values introduce stochastic signal collapse and audible “quack.”</li>
  <li><strong>Faradaic Shielding:</strong> Circuit must be enclosed in grounded metallic capsule to prevent EMI/RFI contamination.</li>
  <li><strong>Component Integrity:</strong> 1% metal film resistors and film capacitors required for deterministic behavior.</li>
</ul>

<hr>

<p>
<strong>Constraint Statement:</strong><br>
This schematic is not optional. It is a functional requirement of the Mechanical Nexus architecture, ensuring that downstream digital processing receives an uncorrupted forensic representation of the physical event.
</p>

</div>
