#include "main.h"

/**
  * _strchr - locates a character in a string
  * @s: string to check
  * @c: character to check
  * Return: pointer to first occurrence of character in @s
  * NULL if characer is not found
  */

char *_strchr(char *s, char c)
{
	int a;

	for (a = 0; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
		{
			return (s + a);
		}
	}

	return ('\0');
}
