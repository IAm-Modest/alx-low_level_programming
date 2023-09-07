#include "main.h"

/**
  * _strncat - concatenates two strings using n bytes from src
  * @src: input
  * @dest: input
  * @n: number of array
  * Return: dest
  */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (dest[a] != '\0')
	{
		a++;
	}
	while (b < n && src[b] != '\0')
	{
		dest[a] = src[b];
		a++;
		b++;
	}
	dest[n] = '\0';
	return (dest);
}
