#include <stdio.h>

/**
  * main - Prints the name of the program
  * @argc: Count the number of argumens passed
  * @argv: The variable arguments
  * Return: 0 is successful
  */

int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
