#include <stdio.h>

/**
  * main - prints the number of arguments passed into it
  * @argc: number of arguments passed
  * @argv: variables passed
  * Return: 0 if successful
  */

int main(int argc, char *argv[])
{
	(void)argv;
	printf("%d\n", argc - 1);

	return (0);
}
