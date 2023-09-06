#include <stdio.h>
#include <stdlib.h>

/**
  * main - prints the sum of two numbers
  * @argc: the number of arguments passed
  * @argv: the arguments passed
  * Return: 0
  */

int main(int argc, char *argv[])
{
	int i, a, b;
	int sum;

	a = atoi(argv[1]);
	b = atoi(argv[2]);

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	sum = a * b;
	printf("%d\n", sum);
	return (0);
}
