#include "main.h"
/**
  * print_last_digit - prints last digit
  * @n: digit to check
  * Return: returns the last digit
  */
int print_last_digit(int n)
{
	int l;

	l = n % 10;
	if (l < 0)
	{
		/* _putchar(-1 * l); */
		return (-1 * l);
	} else
	{
		/* _putchar(l); */
		return (l);
	}
}
