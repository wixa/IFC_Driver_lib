#include "fw/src/mgos_init.h"  
#include <stdbool.h>
#include "fw/src/mgos_gpio.h"
#include "freertos/FreeRTOS.h"
#include "freertos/timers.h"


bool mgos_IFC_Driver_init(void);   // Required - initialisation function

void test_on (int led);
void led_start (void *pvParameters);