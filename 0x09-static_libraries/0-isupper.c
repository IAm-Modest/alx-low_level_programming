#include "main.h"

/**
  * _isupper - checks if input is uppercase
  * @c: character to be checked
  * Return: 1 - if uppercase; 0 if otherwise
  */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}

	return (0);
}
