#include "main.h"

/**
  * _strchr - program begins here
  * @s: inputted value
  * @c: inputted value
  * Return: 0 - successful
  */

char *_strchr(char *s, char c)
{
	int a = 0;

	for (; s[a] >= '\0'; a++)
	{
		if (s[a] == c)
			return (&s[a]);
	}
	return (0);
}
