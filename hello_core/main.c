#include <stdio.h>

#include "pico/stdlib.h"
#include "pico/multicore.h"

void core1_main(void) {
   // TODO: Say hello from core 1
}

void core0_main(void) {
    // TODO: Say hello from core 0
}

int main(void) {
    // Initialize USB
    stdio_init_all();
    // TODO: Set up core 1 functionality
    // TODO: Run core 0 main function
}