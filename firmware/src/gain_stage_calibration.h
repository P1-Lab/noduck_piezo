#ifndef GAIN_STAGE_CALIBRATION_H
#define GAIN_STAGE_CALIBRATION_H

/**
 * Fixed-point configuration (Q16.16 format)
 * 1.0f = 65536
 */
#define Q_SHIFT 16
#define FLOAT_TO_Q(x) ((int32_t)((x) * (1 << Q_SHIFT)))

/* Sampling Context */
#define SAMPLE_RATE 48000.0f

/* Gain Calibration */
#define GAIN_COEFFICIENT   FLOAT_TO_Q(1.25f)

/* Damping / Decay Factor (0–1 in float domain is safer conceptually) */
#define DAMPING_FACTOR     0.98f

/* Physical Modeling Reference Frequencies (float domain, not Q) */
#define BODY_RESONANCE_HZ  48.0f

/* Optional Material Reference Values (for future model expansion) */
#define MASS_ZINC_GRAMS    42.0f
#define MASS_BRASS_GRAMS   54.0f

#endif
