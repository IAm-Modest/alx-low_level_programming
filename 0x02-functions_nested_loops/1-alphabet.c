#include "main.h"
#include <unistd.h>
/**
  * print_alphabet - prints lower case alphabet
  */
void print_alphabet(void)
{
	int l;

	for (l = 97; l < 123; l++)
	{
		_putchar(l);
	}
	_putchar('\n');
}
