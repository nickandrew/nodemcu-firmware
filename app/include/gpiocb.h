// Define GPIO callback data type and associated functions

#ifndef __GPIOCB_H__
#define __GPIOCB_H__

typedef void (*gpio_cb)(unsigned pin, unsigned level, void *data);

gpio_cb gpio_set_callback(unsigned pin, gpio_cb f, void *data);
void    gpio_clear_callback(unsigned pin);

#endif /* __GPIOCB_H__ */
