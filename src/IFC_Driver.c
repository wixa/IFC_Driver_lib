#include "IFC_Driver.h"


// NOTE: library init function must be called mgos_LIBNAME_init()
bool mgos_IFC_Driver_init(void) {
  return true;
}
void led_start (void *pvParameters){
  for( ;; ){
    printf("led_start started!!!!!!!!!! \n");
    int led_on;
    led_on = (intptr_t) pvParameters;
    mgos_gpio_set_mode(led_on, MGOS_GPIO_MODE_OUTPUT);
    mgos_gpio_write (led_on, 1);
    vTaskDelay(100);
  }
}

void test_on (int led){
  printf("test_on %d\n", led);
  xTaskCreate(led_start, "led_on", 2048,(void *)led, 4, NULL);
}