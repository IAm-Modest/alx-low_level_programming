#include "main.h"

/**
  * _strlen - counts the length of the string
  * @s: string to be counted
  *Return: the length of the string
  */

int _strlen(char *s)
{
	int len = 0;

	while (s[len] != '\0')
	{
		len++;
	}

	return (len);
}
