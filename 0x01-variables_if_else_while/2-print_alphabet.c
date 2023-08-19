#include <stdio.h>

/**
  * main - print lower case alphabets
  * Return: 0 if successful
  */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
