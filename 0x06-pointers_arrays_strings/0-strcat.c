#include "main.h"

/**
  * _strcat - contatenates two strings
  * @dest: the destination string
  * @src: the source string
  * Return: destination string after joining
  */

char *_strcat(char *dest, char *src)
{
	int len1;
	int len2;

	len1 = 0;
	while (dest[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (src[len2] != '\0')
	{
		dest[len1] = src[len2];
		len1++;
		len2++;
	}

	dest[len1] = '\0';
	return (dest);
}
