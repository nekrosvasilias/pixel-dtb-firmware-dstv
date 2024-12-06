#ifndef MOCK_HARDWARE_H
#define MOCK_HARDWARE_H

#include <stdint.h>

void mock_init_hardware();
uint8_t simulate_signal_lock(uint32_t frequency);
void simulate_smartcard_authenticate();

#endif // MOCK_HARDWARE_H