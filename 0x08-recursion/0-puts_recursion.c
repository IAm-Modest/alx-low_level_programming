#include "main.h"

/**
  * _puts_recursion - prints a string followed by a newline
  * @s: string to be printed
  */

void _puts_recursion(char *s)
{
	int n = 0;

	_putchar(s[n]);

	if (s[n] == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		n++;
		_puts_recursion(&s[n]);
	}
}
