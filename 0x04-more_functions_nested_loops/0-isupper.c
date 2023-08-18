#include "main.h"

/**
  * _isupper - checks if character is uppercase
  * @c: character to check
  * Return: 1 if uppercase; 0 if lower case
  */

int _isupper(int c)
{
	int n;

	if (c >= 65 && c <= 90)
	{
		n = 1;
		_putchar(c);
		_putchar(58 + 32);
		_putchar(n);
	} else
	{
		n = 0;
		_putchar(c + 58);
		_putchar(32 + n);
	}
	_putchar('\n');
	return (n);
}
