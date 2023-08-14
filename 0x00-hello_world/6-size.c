#include <stdio.h>
/**
  * main - program starts here
  * printf: prints content to the screen
  * sizeof: prints the size of the data type it contains
  * Return: 0 if program runs succesfully
  */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lld byte(s)\n", sizeof(long long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}
