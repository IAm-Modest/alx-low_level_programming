#include "main.h"

/**
  * _isupper - checks if character is uppercase
  * @c: character to check
  * Return: 1 if uppercase; 0 if lower case
  */

int _isupper(int c)
{
	int n;

	if (c >= 'A' && c <= 'Z')
	{
		n = 1;
		_putchar(c + ':');
		_putchar(32 + '1');
	} else
	{
		n = 0;
		_putchar(c + 58);
		_putchar(32 + n);
	}
	_putchar('n');
	return (n);
}
