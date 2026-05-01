<div>

<h2>schematic_no_quack.md</h2>

<h3>1. Circuit Overview</h3>

<p>
This document defines a high-impedance JFET buffer stage for piezoelectric transducers.
The design targets a 10 MΩ input impedance to reduce loading effects that commonly result in harsh midrange emphasis and reduced low-frequency response (“quack” artifact).
</p>

<p>
Typical audio preamps with ~1 MΩ input impedance can load piezo sources, altering their frequency response and attenuating low-frequency content.
This circuit increases input impedance and stabilizes the interface between the piezo element and downstream processing stages.
</p>

<hr>

<h3>2. Schematic</h3>

<pre>
            +9V to +18V DC
                 |
               [R3: 10k]
                 |
  [C1: 10nF]     +-------[C2: 1uF] ---> Output
      ||         |
In >--||---------+ 
      ||         |
           [D]
        [G]  [JFET: J201 / LSK170]
                 |
                 + [S]
    [R1: 10M]    |
        |      [R2: 1k]
        |        |
GND >---+--------+--------------------> GND
</pre>

<hr>

<h3>3. Component Description</h3>

<table>
  <tr>
    <th>Ref</th>
    <th>Component</th>
    <th>Value / Type</th>
    <th>Function</th>
  </tr>

  <tr>
    <td>J1</td>
    <td>JFET</td>
    <td>J201 / LSK170</td>
    <td>High-input-impedance buffer stage for piezo transduction</td>
  </tr>

  <tr>
    <td>R1</td>
    <td>Gate Bias Resistor</td>
    <td>10 MΩ</td>
    <td>Sets input impedance and minimizes loading on piezo element</td>
  </tr>

  <tr>
    <td>R2</td>
    <td>Source Resistor</td>
    <td>1 kΩ</td>
    <td>Defines bias current and operating stability of JFET stage</td>
  </tr>

  <tr>
    <td>R3</td>
    <td>Drain Resistor</td>
    <td>10 kΩ</td>
    <td>Establishes output gain and operating headroom</td>
  </tr>

  <tr>
    <td>C1</td>
    <td>Input Capacitor</td>
    <td>10 nF</td>
    <td>DC blocking; sets subsonic cutoff below audio range</td>
  </tr>

  <tr>
    <td>C2</td>
    <td>Output Capacitor</td>
    <td>1 µF</td>
    <td>AC coupling to output stage; preserves low-frequency content</td>
  </tr>
</table>

<hr>

<h3>4. Design Requirements</h3>

<ul>
  <li><strong>Input Impedance:</strong> 10 MΩ target minimum. Lower values will load the piezo source and alter frequency response.</li>

  <li><strong>Shielding:</strong> Enclosure should be grounded metal or equivalent EMI/RFI shielding to reduce interference in high-impedance node.</li>

  <li><strong>Component Tolerance:</strong> 1% metal film resistors recommended for consistent biasing and repeatable performance.</li>
</ul>

<hr>

<h3>5. Design Intent</h3>

<p>
This circuit is intended as a front-end buffer for piezoelectric transducers in acoustic and hybrid instruments.
It prioritizes impedance matching and signal stability before any digital processing stage.
</p>

<p>
The goal is consistent capture of mechanical vibration with minimal electrical loading effects at the sensor interface.
</p>

</div>
