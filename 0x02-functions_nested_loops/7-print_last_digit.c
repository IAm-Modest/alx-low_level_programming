#include "main.h"
/**
  * print_last_digit - prints last digit
  * @n: digit to check
  * Return: returns the last digit
  */
int print_last_digit(int n)
{
	int l, a;

	l = n % 10;
	if (l < 0)
	{
		a = -1 * l;
	} else
	{
		a = l;
	}
	_putchar(a + 0);
	return (a);
}
