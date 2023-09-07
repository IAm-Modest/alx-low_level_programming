#include "main.h"

/**
  * _memset - function fills a block of memory witha specific value
  * @s: starting address of the memory to be filled
  * @b: the desired value
  * @n: the number of bytes to be changed
  * Return: byte value  array
  */

char *_memset(char *s, char b, unsigned int n)
{
	int a = 0;

	for (; n > 0; a++)
	{
		s[a] = b;
		n--;
	}
	return (s);
}
