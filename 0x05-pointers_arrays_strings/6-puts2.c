#include "main.h"

/**
  * puts2 - prints every other character of a string
  * @str: string to prints
  */

void puts2(char *str)
{
	int len;

	while (str[len] != '\0')
	{
		_putchar(str[len]);
		len = len + 2;
	}
}
