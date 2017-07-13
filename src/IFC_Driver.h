#include "fw/src/mgos_init.h"  
#include <stdbool.h>
#include "fw/src/mgos_gpio.h"

bool mgos_IFC_Driver_init(void);   // Required - initialisation function

void test(int led, int state);