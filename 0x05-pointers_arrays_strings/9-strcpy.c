#include "main.h"

/**
  * _strcpy - copies strings from src to dest
  * @dest: the dest variable
  * @src: holds the src variable
  * Return: returns dest
  */

char *_strcpy(char *dest, char *src)
{
	int len;

	for (len = 0; src[len] != '\0'; len++)
		dest[len] = src[len];

	dest[len] = '\0';

	return (dest);
}
