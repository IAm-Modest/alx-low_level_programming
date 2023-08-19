#include <stdio.h>

/**
  * main - prints base 10 single digits
  * Return: 0 if without error
  */

int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
