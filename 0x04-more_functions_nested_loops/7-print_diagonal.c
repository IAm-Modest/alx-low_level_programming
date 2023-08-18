#include "main.h"

/**
  * print_diagonal - prints diagonally
  * @n: the length of diagonal
  */

void print_diagonal(int n)
{
	if (n > 0)
	{
		int i, j;

		for (i = 0; i < n; i++)
		{
			for (j = 0; j < n; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	} else
	{
		_putchar('\n');
	}
}
