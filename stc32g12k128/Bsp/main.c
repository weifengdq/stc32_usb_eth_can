#include "STC32G.h"
#include "bsp_gpio.h"

void main(void)
{
    WTST = 0;
    EAXSFR();
    gpio_init();
    while(1)
    {
        gpio_test();
    }
}