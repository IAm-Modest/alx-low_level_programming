#include "main.h"

/**
  * print_rev - prints strings in reverse
  * @s: string to be printed
  */

void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');

}
