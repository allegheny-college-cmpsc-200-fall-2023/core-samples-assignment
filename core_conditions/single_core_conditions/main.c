#include <stdio.h>
#include <stdlib.h>

#include "headers/timing.h"

#include "pico/stdlib.h"
#include "pico/multicore.h"
#include "hardware/irq.h"
#include "hardware/adc.h"

float convert_c(float);

float convert_k(float temp) {
    return convert_c(temp) + 273.15;
}

float convert_f(float temp) {
    float conv_factor = 1.8 * convert_c(temp);
    return conv_factor + 32;
}

float convert_c(float temp) {
    float conv_factor = 3.3 / 4096;
    float result = temp * conv_factor;
    return 27 - (result - .706) / .001721;
}

int main(void) {
    stdio_init_all();

    // Initialize hardware sensor reading

    adc_init();
    adc_set_temp_sensor_enabled(true);
    adc_select_input(4);
    
    // TODO: Create loop to operate continuous readings
        // TODO: Set up start timing
        uint data = adc_read();

        // TODO: Print result of convert to scary Kelvin scale
        // TODO: Print result of convert to cursed Farenheit scale
        // TODO: Print result of convert to beautiful Celsius scale

        // TODO: Setup end timing
        // TODO: Print net_time result
        sleep_ms(1000);
    // TODO: Finish loop
}