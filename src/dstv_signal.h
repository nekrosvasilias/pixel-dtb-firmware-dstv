#ifndef DSTV_SIGNAL_H
#define DSTV_SIGNAL_H

#include <stdint.h>
#include "mock_hardware.h"

uint8_t lock_dvb_signal(uint32_t frequency);
void process_transport_stream();

#endif // DSTV_SIGNAL_H