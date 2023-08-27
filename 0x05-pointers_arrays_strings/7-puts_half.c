#include "main.h"

/**
  * puts_half - prints the second half of a string
  * @str: the string to be worked on
  */

void puts_half(char *str)
{
	int len = 0;
	int len_2;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
	{
		len_2 = len / 2;
	} else
	{
		len_2 = (len - 1) / 2;
	}

	for (; len_2 < len; len_2++)
	{
		_putchar(str[len_2]);
	} _putchar('\n');
}

