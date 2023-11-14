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

void core1_interrupt_handler () {
    /* 
        TODO: Create pattern for handling interrupt requests including
              calls to converstion functions
    */
    // TODO: Clear interrupt request buffer
}

void core1_main(void) {

    // TODO: Clear interrupt request buffer
    /*
        TODO: Create interrupt request handler; parameters are:
        
        SIO_IRQ_PROC1, core1_interrupt_handler
    */
    /*
        TODO: Enable interrupt requests on handler; parameters are:
        
        SIO_IRQ_PROC1, true
    */

    while (true) {
        tight_loop_contents();
    }
}

void core0_main(void) {
    while (true) {
        // TODO: Get starting time
        uint data = adc_read();
        // TODO: Push blocking request with sensor read data
        // TODO: Get ending time
        // TODO: Print outcome of net_time
        sleep_ms(1000);
    }
}

int main(void) {
    stdio_init_all();
    
    multicore_launch_core1(core1_main);

    adc_init();
    adc_set_temp_sensor_enabled(true);
    adc_select_input(4);
    
    core0_main();
}