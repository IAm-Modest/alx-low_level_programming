#include "main.h"

/**
  * _atoi - converts a string to an integer
  * @s: string to be converted
  * Return: an integer
  */

int _atoi(char *s)
{
	int a = 1, i =0;
	unsigned int b = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
			a *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '\0' && s[i] != '\0'))
	{
		b = (a * 10) + (s[i] - '0');
		i++;
	}
	b *= a;
	return (b);
}
