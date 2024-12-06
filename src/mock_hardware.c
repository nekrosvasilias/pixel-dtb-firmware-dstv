#include "mock_hardware.h"
#include <stdio.h>

void mock_init_hardware() {
    printf("Mock hardware initialized for DStv.\n");
}

uint8_t simulate_signal_lock(uint32_t frequency) {
    printf("Simulating signal lock at frequency: %u MHz\n", frequency);
    return 1; // Return success
}

void simulate_smartcard_authenticate() {
    printf("Simulating smartcard authentication... Success.\n");
}