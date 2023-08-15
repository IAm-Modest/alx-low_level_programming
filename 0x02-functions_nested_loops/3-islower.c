#include "main.h"
#include <unistd.h>
/**
  * _islower - checks for lower case alphabet
  * @c: the charater to check
  * Return: 1 if lower case
  * 0 is not
  */
int _islower(int c)
{
	int n;

	if (c > 97 && c < 122)
	{
		n = 1;
	} else
	{
		n = 0;
	}
	return (n);
}
