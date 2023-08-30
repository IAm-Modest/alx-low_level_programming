#include "main.h"

/**
  * _memset - fills memory with bytes
  * @s: pointer
  * @b: character to fill
  * @n: number of values to fill
  * Return: 0
  */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (n = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
