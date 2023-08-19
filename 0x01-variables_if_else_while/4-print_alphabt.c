#include <stdio.h>

/**
  * main - prints lowers letters without q and e
  * Return: 0 if successful
  */

int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		if ((i == 101 || i == 113))
			continue;
		else
		{
			putchar(i);
		}
	}
	putchar('\n');
	return (0);
}
