#ifndef GAIN_STAGE_CALIBRATION_H
#define GAIN_STAGE_CALIBRATION_H

/**
 * FIXED_POINT_SCALING
 * 1.0f is represented as 65536 (2^16).
 */
#define Q_SHIFT 16
#define FLOAT_TO_Q(x) ((int32_t)((x) * (1 << Q_SHIFT)))

/* Mandatory Mass Constants */
#define MASS_ZINC_Q        FLOAT_TO_Q(42.0f)  // Zinc Capsule mass in grams
#define MASS_BRASS_Q       FLOAT_TO_Q(54.0f)  // Brass Capsule mass in grams

/* The 48Hz Resonant Anchor Coefficient */
#define RESONANT_ANCHOR_Q  FLOAT_TO_Q(48.0f)  // Physical fundamental of the chassis

/* Calibration Coefficients */
#define GAIN_COEFFICIENT   FLOAT_TO_Q(1.25f)  // Voltage to force normalization
#define INERTIA_THRESHOLD  FLOAT_TO_Q(0.98f)  // Mechanical damping factor

#endif // GAIN_STAGE_CALIBRATION_H
