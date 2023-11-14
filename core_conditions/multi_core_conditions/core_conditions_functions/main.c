#include <stdio.h>
#include <stdlib.h>

#include "headers/heap.h"
#include "headers/timing.h"

#include "pico/stdlib.h"
#include "pico/multicore.h"
#include "hardware/adc.h"

/*
    TODO: Create data structure to pass relevant values to/from buffer
*/

/* TODO: Function type? */convert_c(int);

/* TODO: Function type? */convert_k(int temp) {
    // TODO: Revise function to support new solution
}

/* TODO: Function type? */convert_f(int temp) {
    // TODO: Revise function to support new solution
}

/* TODO: Function type? */convert_c(int temp) {
    // TODO: Revise function to support new solution
}

void core1_main(void) {
    /* 
        TODO: Implement functionality for solution to our buffer 
              bamboozlement
    */
}

void core0_main(void) {
    // TODO: Do we need to add anything to make our solution work?

    uint data = adc_read();

    printf("LATEST TEMPERATURE READINGS\n");

    // TODO: Implement start time

    /*
        TODO: Pass 
    */

    // TODO: Implement start time
    // TODO: Print result of net_time
    sleep_ms(1000);

    // TODO: Report remaining space in heap
}

int main(void) {
    stdio_init_all();
    
    multicore_launch_core1(core1_main);

    adc_init();
    adc_set_temp_sensor_enabled(true);
    adc_select_input(4);
    
    while (true) {
        core0_main();
    }
}