#pragma once

typedef struct {
	char** toppings;
	int size;
}PlainPizza;

void InitPlainPizza(PlainPizza* pizza);