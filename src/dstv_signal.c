#include "dstv_signal.h"
#include <stdio.h>

uint8_t lock_dvb_signal(uint32_t frequency) {
    printf("Locking onto DVB signal at %u MHz...\n", frequency);
    // Simulated success
    return simulate_signal_lock(frequency);
}

void process_transport_stream() {
    printf("Processing transport stream...\n");
    // Simulated stream data
}