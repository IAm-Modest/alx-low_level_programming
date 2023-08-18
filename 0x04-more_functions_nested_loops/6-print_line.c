#include "main.h"

/**
  * print_line - prints lines to screen
  * @n: the length of lines to prints
  */

void print_line(int n)
{
	if (n > 0)
	{
		for (; n > 0; n--)
		{
			_putchar(95);
		}
		_putchar('\n');
	} else
	{
		_putchar('\n');
	}
}
