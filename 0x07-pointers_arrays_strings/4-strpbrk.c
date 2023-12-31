#include "main.h"

/**
  * _strpbrk - searches a string for any set of bytes
  * @s: string
  * @accept: bytes to search for
  * Return: pointer to the byte in s
  */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}
		s++;
	}
	return ('\0');
}
