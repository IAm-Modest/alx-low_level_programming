#include <stdio.h>

/**
  * main - prints fizz, buzz or fizzbuzz
  * Return: 0 if siccessful
  */

int main(void)
{
	int i = 1;

	for (; i <= 100; i++)
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		} else if (i % 5 == 0)
		{
			printf("Buzz ");
		} else if (i % 3 == 0)
		{
			printf("Fizz ");
		} else
		{
			printf("%d ", i);
		}
	printf("\n");
	return (0);
}
