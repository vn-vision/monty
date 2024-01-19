#include "monty.h"

instruction_t Commands[] = {
	{"pall", _pall},
	{"pint", pint},
	{"nop", nop},
	{"pop", pop},
	{"add", add},
	{"swap", swap},
	{NULL, NULL}
};
