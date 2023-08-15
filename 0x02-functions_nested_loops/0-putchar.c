#include "main.h"
#include <unistd.h>
/**
  * main - begins the program
  * _putchar - writes the character c to stdout
  * @c: The character to print
  * Return:0 for a successful program
  */
int main(void)
{
	int _putchar(char c)
	{
		return (write(1, &c, 1));
	}

	_putchar('_');
	_putchar('p');
	_putchar('u');
	_putchar('t');
	_putchar('c');
	_putchar('h');
	_putchar('a');
	_putchar('r');
	_putchar('\n');

	return (0);
}

