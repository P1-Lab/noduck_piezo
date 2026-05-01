<h2 style="font-family:sans-serif; letter-spacing:0.06em; text-transform:uppercase;">
capsule_retrofit_guide.md
</h2>

<h3 style="font-family:sans-serif; color:#555; font-weight:600;">
Piezo Capsule Retrofit Installation Guide
</h3>

<p style="font-family:sans-serif; max-width:850px; line-height:1.6;">
This guide describes the installation procedure for replacing adhesive-mounted piezoelectric sensors with a mechanically mounted capsule-based transducer system in acoustic and hybrid instruments.  
The goal is improved consistency, transient response, and low-frequency stability through controlled mechanical coupling.
</p>

<hr style="border:none; border-top:1px solid #ddd; margin:18px 0;">

<h3 style="font-family:sans-serif; text-transform:uppercase; letter-spacing:0.05em; border-left:4px solid #000; padding-left:10px;">
Scope
</h3>

<p style="font-family:sans-serif; line-height:1.6;">
This procedure applies to retrofit installation of rigidly mounted piezo capsule transducers in wooden or composite percussion instruments.  
It replaces surface-mounted adhesive pickups with mechanically embedded sensor housings.
</p>

<h3 style="font-family:sans-serif; text-transform:uppercase; letter-spacing:0.05em; border-left:4px solid #000; padding-left:10px;">
Required Tools and Materials
</h3>

<p style="font-family:sans-serif; line-height:1.7;">
• Sovereign Capsule Node (pre-assembled transducer housing)<br>
• 38.0 mm Forstner bit or precision boring tool<br>
• High-modulus epoxy adhesive (Shore D > 80)<br>
• JFET buffer module (≥10 MΩ input impedance)<br>
• Standard luthiery tools for cavity preparation and alignment
</p>

<h3 style="font-family:sans-serif; text-transform:uppercase; letter-spacing:0.05em; border-left:4px solid #000; padding-left:10px;">
Placement Selection
</h3>

<p style="font-family:sans-serif;">
<strong>Primary:</strong> Bridge / main load transfer path<br>
<strong>Secondary:</strong> Structural brace intersections<br>
<strong>Tertiary:</strong> High-stiffness grain regions with resonance sustain
</p>

<p style="font-family:sans-serif;">
Surface must be flat for full capsule contact. Avoid mechanically decoupled or floating panels.
</p>

<h3 style="font-family:sans-serif; text-transform:uppercase; letter-spacing:0.05em; border-left:4px solid #000; padding-left:10px;">
Installation Procedure
</h3>

<p style="font-family:sans-serif;">
<strong>Stage I — Cavity Preparation</strong><br>
Machine 38.0 mm flat-bottom recess, 12–15 mm depth, with perpendicular walls.
</p>

<p style="font-family:sans-serif;">
<strong>Stage II — Dry Fit</strong><br>
Verify full seating, no tilt, and no air gaps between capsule and cavity.
</p>

<p style="font-family:sans-serif;">
<strong>Stage III — Bonding</strong><br>
Apply thin epoxy layer, seat capsule, remove excess adhesive for uniform curing.
</p>

<p style="font-family:sans-serif;">
<strong>Stage IV — Curing</strong><br>
Maintain constant pressure for ~24 hours. No movement during polymerization.
</p>

<h3 style="font-family:sans-serif; text-transform:uppercase; letter-spacing:0.05em; border-left:4px solid #000; padding-left:10px;">
Electrical Integration
</h3>

<p style="font-family:sans-serif;">
Connect capsule output to ≥10 MΩ JFET buffer input.  
Ensure proper grounding and route buffered signal to ADC stage (3.3V compliant).
</p>

<h3 style="font-family:sans-serif; text-transform:uppercase; letter-spacing:0.05em; border-left:4px solid #000; padding-left:10px;">
Validation Procedure
</h3>

<p style="font-family:sans-serif;">
Perform controlled excitation and verify:
<br>• consistent transient response
<br>• preserved low-frequency resonance
<br>• absence of mechanical noise or coupling drift
</p>

<hr style="border:none; border-top:1px solid #ddd; margin:18px 0;">

<p style="font-family:sans-serif; font-size:0.9rem; color:#444;">
Performance gains are achieved through mechanical stability and impedance control rather than signal processing correction.
</p>
