#ifndef __BSP_GPIO_H__ 
#define __BSP_GPIO_H__

#define LED P13

extern void led_on(void);
extern void led_off(void);
extern void gpio_init(void);
extern void gpio_test(void);

#endif
