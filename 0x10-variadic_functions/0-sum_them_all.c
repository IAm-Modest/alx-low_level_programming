#include <stdarg.h>
#include "variadic_functions.h"

/**
  * sum_them_all - sums up all given argument
  * @n: takes the number of argument to be given
  * @...: elipses; represents the given arguments to be passed
  * Return: (0) if no argument is passed; sum - if argument is passed
  */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum = 0;

	if (n == 0)
		return (0);
	va_start(num, n);

	for (int i = 0; i < n; i++)
	{
		sum += va_arg(num, int);
	}

	va_end(num);

	return (sum);
}
