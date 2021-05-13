#pragma once
#include <stdlib.h>
#include "PlainPizza.h"

void InitPlainPizza(PlainPizza* pizza) {
	pizza->toppings = NULL;
	pizza->size = 0;
}
