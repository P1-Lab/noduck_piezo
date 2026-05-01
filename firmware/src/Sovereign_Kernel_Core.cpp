#include <stdint.h>
#include "gain_stage_calibration.h"

/**
 * SovereignKernel
 * State-space inspired audio model for piezo transduction signals.
 * Implements a damped integrator system for low-frequency energy preservation.
 */

class SovereignKernel {
private:
    const float damping = 0.98f;
    const float gain = GAIN_COEFFICIENT;

    float prev = 0.0f;
    float vel = 0.0f;

public:
    SovereignKernel() {}

    /**
     * Process a single audio sample.
     * Input: buffered piezo signal (high impedance front-end)
     * Output: modeled displacement-like response
     */
    float process_sample(float input) {

        // Excitation stage (normalized input)
        float excitation = input * gain;

        // Integrator (velocity domain)
        vel += excitation;

        // Displacement accumulation
        float out = prev + vel;

        // Damping (energy loss / system resistance)
        vel *= damping;

        prev = out;

        return out;
    }
};
