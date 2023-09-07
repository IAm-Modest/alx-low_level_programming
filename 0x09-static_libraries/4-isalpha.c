#include "main.h"

/**
  * _isalpha - checks for alphabets
  * @c: character to check
  * Return: if @c is a letter - 1; if not - 0
  */

int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
