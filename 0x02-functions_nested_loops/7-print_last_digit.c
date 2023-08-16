#include "main.h"
/**
  * print_last_digit - prints last digit
  * @n: digit to check
  * Return: returns the last digit
  */
int print_last_digit(int n)
{
	int l;
	int a;

	l = n % 10;
	if (l >= 0)
	{
		a = l;
	} else
	{
		a = (-1 * l);
	}
	_putchar(a);
	return (a);
}
