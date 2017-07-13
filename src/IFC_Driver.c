#include "IFC_Driver.h"

// NOTE: library init function must be called mgos_LIBNAME_init()
bool mgos_IFC_Driver_init(void) {
  return true;
}
void test (int led, int state){
  mgos_gpio_set_mode(led,1/*MGOS_GPIO_MODE_OUTPUT*/);
  mgos_gpio_write (led, state);
}