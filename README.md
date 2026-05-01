<div style="font-family: sans-serif; max-width: 800px; line-height: 1.5; color: #111;">

<h2>noduck_piezo</h2>

<p><strong>Mechanical Transduction Standard for Percussive Instruments</strong></p>

<p>
noduck_piezo is a mechanically stabilized piezoelectric transduction system designed to improve low-frequency response, transient accuracy, and strike consistency in contact-based percussion sensing.
</p>

<p>
It replaces adhesive-mounted piezo elements with a rigid, mass-loaded assembly and a high-impedance buffer stage.
</p>

<hr>

<h3>Design Goals</h3>
<ul>
<li>Improve low-frequency response</li>
<li>Reduce mechanical variance between strikes</li>
<li>Increase transient clarity and repeatability</li>
<li>Preserve signal integrity via high input impedance</li>
</ul>

<hr>

<h3>System Architecture</h3>

<p><strong>1. Mechanical Coupling</strong><br>
35mm brass-backed piezo mounted in a rigid, mass-loaded housing to stabilize vibration response.</p>

<p><strong>2. Structural Interface</strong><br>
Direct rigid coupling to the instrument surface reduces energy loss and improves strike-to-signal consistency.</p>

<p><strong>3. Buffer Stage</strong><br>
Discrete JFET buffer (10MΩ input impedance) isolates the piezo from ADC loading effects.</p>

<hr>

<h3>Electrical Interface</h3>
<ul>
<li>Piezo → JFET buffer (high impedance)</li>
<li>Buffered output → ADC (3.3V protected)</li>
<li>Optional Zener clamping for overvoltage protection</li>
</ul>

<hr>

<h3>Intended Use</h3>
<ul>
<li>Acoustic percussion instruments</li>
<li>Hybrid electroacoustic systems</li>
<li>Experimental contact microphone systems</li>
</ul>

<p>
Not a full audio processor — this is a transduction front-end.
</p>

<hr>

<h3>Key Insight</h3>

<p>
Piezo performance limits are primarily mechanical, not computational.
This system addresses the constraint at the physical interface layer.
</p>

</div>
