#include "main.h"
#include <unistd.h>
/**
  * print_alphabet_x10 - prints lower case alphabet 10x
  * _putchar: prints character to stdout
  */
void print_alphabet_x10(void)
{
	int j = 0;
	int i;

	while (j < 10)
	{
		for (i = 97; i < 123; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
		j++;
	}
}
