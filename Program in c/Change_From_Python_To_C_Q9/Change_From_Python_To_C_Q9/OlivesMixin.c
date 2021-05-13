
#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "OlivesMixin.h"

void add_olives(PlainPizza* pizza) {
	char* olives = "Olives";
	pizza->toppings = (char**)realloc(pizza->toppings, sizeof(char*)*(pizza->size + 1));
	if (pizza->toppings == NULL) 
		return;
	pizza->toppings[pizza->size] = (char*)malloc(sizeof(char)*(strlen(olives)+1));
	if (pizza->toppings[pizza->size] == NULL)
		return;
	printf("Adding Olives!");
	strcpy(pizza->toppings[pizza->size], olives);
	pizza->size= pizza->size+1;
}