#include "main.h"

/**
  * print_array - prints n number of arrays
  * @a: the array
  * @n: number of array to print
  */

void print_array(int *a, int n)
{
	int len = 0;
	int f = 0;

	while (str[len] != '\0')
		len++;

	for (; f < n; f++)
	{
		printf(a[f]);
		printf(" ,");
	}
}
