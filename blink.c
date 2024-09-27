#include "pico/stdlib.h"

const int  ON_BORD_LED = 25;

int main(){
    gpio_init(ON_BORD_LED);
    gpio_set_dir(ON_BORD_LED, GPIO_OUT);
    while(1){
        gpio_put(ON_BORD_LED, 1);
        sleep_ms(750);
        gpio_put(ON_BORD_LED, 0);
        sleep_ms(250);
    }

    return 0;
}