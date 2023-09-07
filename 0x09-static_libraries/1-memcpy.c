#include "main.h"

/**
  * _memcpy - copies memory area
  * @dest: where memory is stored
  * @src: where memory is copied from
  * @n: number of bytes to copied
  * Return: stored memory
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int p = 0;
	int a = n;

	for (; p < a; p++)
	{
		dest[p] = src[p];
		n--;
	}
	return (dest);
}
