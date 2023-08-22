#include "main.h"

/**
  * swap_int - swaps integer value
  * @a: value a
  * @b: value b
  */

void swap_int(int *a, int *b)
{
	int nul;
	int *c = &nul;

	*c = *a;
	*a = *b;
	*b = *c;
}
