#include "main.h"
/**
  * print_sign - prints sign
  * @n: the number to check
  * _putchar: prints character to stdout
  * Return: 1 if +, -1 if - and 0 if otherwise
 */
int print_sign(int n)
{
	int r;

	if (n > 0)
	{
		_putchar('+');
		r = 1;
	} else if (n < 0)
	{
		_putchar('-');
		r = -1;
	} else
	{
		_putchar('0');
		r = 0;
	}
	_putchar(',');
	_putchar(' ');
	return (r);
}
