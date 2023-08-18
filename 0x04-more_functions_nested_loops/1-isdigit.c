#include "main.h"

/**
  * _isdigit - checks if its a digits
  * @c: character to be checked
  * Return: 1 if its a digit; 0 if not
  */
int _isdigit(int c)
{
	int n;

	if (c >= 48 && c <= 57)
	{
		n = 1;
		_putchar(c + 58);
		_putchar(32 + '1');
	} else
	{
		n = 0;
		_putchar(c + 58);
		_putchar(32 + '0');
	}
	return (n);
}
