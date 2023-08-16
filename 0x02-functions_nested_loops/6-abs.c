#include "main.h"
/**
  * _abs - returna the absolute of its parameter
  * @n: the parameter
  * Return: returns the absolute value
  */
int _abs(int n)
{
	int a;

	if (n < 0)
	{
		a = -1 * n;
	} else
	{
		a = n;
	}
	return (a);
}
