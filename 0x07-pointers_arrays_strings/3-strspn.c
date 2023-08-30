#include "main.h"

/**
  * _strspn - gets the length of a prefix substring
  * @s: prefix source string
  * @accept: prefix to check
  * Return: number of bytes in s
  */

unsigned int _strspn(char *s, char *accept)
{
	int a;
	unsigned int n = o;

	while (*s)
	{
		for (a = 0; accept[a]; a++)
		{
			if (*s == accept[index])
			{
				n++;
				break;
			} else if (accept[a + 1] == '\0')
			{
				return (n);
			}
		}
		s++;
	}

	return (0);
}
