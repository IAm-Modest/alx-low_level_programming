#include "main.h"
/**
  * print_last_digit - prints last digit
  * @n: digit to check
  * Return: returns the last digit
  */
int print_last_digit(int n)
{
	int l, r;

	l = n % 10;
	if (l < 0)
	{
		_putchar(-l + 48);
		r = (-l);
	} else
	{
		_putchar(l + 48);
		r = (l);
	}
	return (r);
}
