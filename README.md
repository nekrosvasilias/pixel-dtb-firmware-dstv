# Pixel-DTB-Firmware for DStv

This repository contains an adapted version of the Pixel-DTB-Firmware to simulate DStv functionalities. It includes mock modules for testing satellite signal locking, smartcard authentication, and transport stream processing.

## Features
- Simulated DVB-S/DVB-S2 signal locking.
- Mock smartcard authentication.
- Basic processing of transport streams.

## Repository Structure
- `src/`: Source code for the firmware.
- `Makefile`: Build instructions.

## Building the Firmware
1. Clone the repository:
   ```bash
   git clone https://github.com/nekrosvasilias/pixel-dtb-firmware-dstv.git
   cd pixel-dtb-firmware-dstv
   ```
2. Build the firmware:
   ```bash
   make
   ```
3. Run the firmware (simulation):
   ```bash
   ./dstv_firmware
   ```

## Testing
Since no hardware is connected, the firmware simulates all hardware interactions. Outputs are printed to the console to verify functionality.

## License
This project is licensed under the MIT License.
