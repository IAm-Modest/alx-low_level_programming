#include "main.h"

/**
  * rev_string - reverses strings
  * @s: string to be reversed
  */

void rev_string(char *s)
{
	int len = 0;
	char temp = s[0];
	int i;

	while (s[len] != '\0')
		len++;

	for (i = 0; i < len; i++)
	{
		len--;
		temp = s[i];
		s[i] = s[len];
		s[len] = temp;
	}
}
