#include "main.h"

/**
  * _memcpy - copies the memory area
  * @dest: the destination pointer
  * @src: source pointer
  * @n: number of arrays to copy
  * Return: 0
  */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = *src[i];
	}

	return (dest);
}
