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
	int a = 0, b = 0;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
	} else
	{
		printf("Error\n");
		return (1);
	}
	return (0);
}
