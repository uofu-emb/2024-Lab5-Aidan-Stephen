#include <stdio.h>
#include <pico/stdlib.h>
#include "lab5.h"

int main(void)
{
    int toggle = 0;
    stdio_init_all();
    gpio_init(OUT_PIN);
    gpio_set_dir(OUT_PIN, GPIO_OUT);
    gpio_put(OUT_PIN, toggle);
    hard_assert(cyw43_arch_init() == PICO_OK);

    while (true) {
        toggle = !toggle;
        gpio_put(OUT_PIN, toggle);
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, toggle);
        sleep_ms(DELAY_MS);
    }
}
