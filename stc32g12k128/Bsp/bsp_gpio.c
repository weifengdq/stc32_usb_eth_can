#include "bsp_gpio.h"
#include "STC32G_GPIO.h"
#include "STC32G_Delay.h"

void led_on(void)
{
    LED = 0; //on
}

void led_off(void)
{
    LED = 1; //off
}

void gpio_init(void)
{
    //P1.3 LED
    // P1_MODE_IO_PU(GPIO_Pin_3);
    // led_off();

    //P1.3 LED
    // GPIO_InitTypeDef GPIO_InitStructure = {
    //     .Mode = GPIO_OUT_PP,
    //     .Pin  = GPIO_Pin_3
    // };
    GPIO_InitTypeDef GPIO_InitStructure;
    GPIO_InitStructure.Mode = GPIO_OUT_PP;
    GPIO_InitStructure.Pin  = GPIO_Pin_3;
    GPIO_Inilize(GPIO_P1, &GPIO_InitStructure);
    led_off();
}

void gpio_test(void)
{
    led_on();
    delay_ms(1000);
    led_off();
    delay_ms(1000);
}
