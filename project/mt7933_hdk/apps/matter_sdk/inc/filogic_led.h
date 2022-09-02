

#ifndef __FILOGIC_LED_H__
#define __FILOGIC_LED_H__


#include <stdbool.h>
#include <stdint.h>


#ifdef __cplusplus
extern "C" {
#endif


/*******************************************************************************
 * Prerequisites
 ******************************************************************************/


#ifndef HAL_GPIO_MODULE_ENABLED
#error "HAL_GPIO_MODULE_ENABLED is needed by BUTTON"
#endif

#ifndef HAL_NVIC_MODULE_ENABLED
#error "HAL_NVIC_MODULE_ENABLED is needed by BUTTON"
#endif


/*****************************************************************************
 * Enums
 *****************************************************************************/


typedef enum
{
    FILOGIC_LED_OFF,
    FILOGIC_LED_R,
    FILOGIC_LED_G,
    FILOGIC_LED_B,
} filogic_led_color_t;


/*****************************************************************************
 * Structures
 *****************************************************************************/


/*****************************************************************************
 * Functions
 *****************************************************************************/


void filogic_led_status_color(filogic_led_color_t color);


void filogic_led_status_dim(uint8_t dim);


void filogic_led_light_dim(uint8_t dim);


void filogic_led_status_toggle(bool on_off);


void filogic_led_light_toggle(bool on_off);


void filogic_led_status_color(filogic_led_color_t color);


void filogic_led_light_color(filogic_led_color_t color);


void filogic_led_init(void);


#ifdef __cplusplus
}
#endif


#endif /* __FILOGIC_LED_H__ */
