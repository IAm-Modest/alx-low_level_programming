#include "main.h"

/**
  * _memset - fills memory with bytes
  * @s: pointer
  * @b: character to fill
  * @n: number of values to fill
  * Return: return pointer to memory
  */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
