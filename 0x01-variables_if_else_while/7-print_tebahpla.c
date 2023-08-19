#include <stdio.h>

/**
  * main - prints alphabets in reverse
  * Return: 0 if without error
  */

int main(void)
{
	int i;

	for (i = 122; i >= 97; i--)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
