#include "main.h"
/**
  * _isalpha - checks for alphabets
  * @c: character to be checked
  * Return: 0 if not alphabet
  * 1, if alphabet
  */
int _isalpha(int c)
{
	int n;

	if ((c > 64 && c < 91) || (c > 96 && c < 123))
	{
		n = 1;
	} else
	{
		n = 0;
	}
	return (n);
}
