# Description
This is a template for an AVR-GCC project. The microcontroller used in this template is the ATmega328P, configured to operate at a frequency of 16 MHz.

# Compile
1. Configure the project for the ATmega328P with a frequency of 16 MHz:
   ```
   cmake -B build -DCMAKE_BUILD_TYPE=Release -DF_CPU=16000000UL -DMCU=atmega328p
   ```
2. Compile using 8 cores:
   ```
   cmake --build build --config Release -j 8
   ```

# Using as a Template for a New Project
## Setup
1. Update the `CMakeLists.txt` file and `create_new_module.sh` script:
   - Replace all occurrences of `projectname` with your desired project name.
2. Remove example modules:
   - Delete the `src/hello_world` and `src/main` directories.
3. Create your own modules using the `create_new_module.sh` script. Examples:
   - For an application module:
     ```
     ./create_new_module.sh app main
     ```
   - For a library module:
     ```
     ./create_new_module.sh lib atmega-utils
     ```
4. Apply default VS Code configurations:
   ```
   sudo bash update_vscode_configs.sh
   ```

## Settings
- Set the `F_CPU` variable in `CMakeLists.txt` to your microcontroller’s frequency (default: 16,000,000 Hz).
- Set the `MCU` variable in `CMakeLists.txt` to your microcontroller’s name (default: ATmega328P).
