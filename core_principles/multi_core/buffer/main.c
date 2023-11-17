#include <stdio.h>
#include <stdlib.h>

#include "headers/data.h"
#include "headers/heap.h"
#include "headers/timing.h"

#include "pico/stdlib.h"
#include "pico/multicore.h"

void core1_main(void) {
    
}

void core0_main(void) {

}

int main(void) {
    stdio_init_all();
    
    multicore_launch_core1(core1_main);
    
    while (true) {
        core0_main();
    }
}
