#pragma once
#include <stdlib.h>
#include <stdio.h>
#include "SistersPizza.h"
#include "OlivesMixin.h"

void prepare_pizza(SisterPizza* sPizza) {
	InitPlainPizza(&sPizza->pizza);
	add_olives(&sPizza->pizza);
}