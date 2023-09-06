#include <stdio.h>

/**
  * main - prints all arguments it receives
  * @argc: the number of arguments passed
  * @argv: the arguments passed
  * Return: 0 always for success program
  */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
