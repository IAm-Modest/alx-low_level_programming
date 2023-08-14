#include <stdio.h>
/**
  * main - program starts here
  * printf: prints content to the screen
  * sizeof: prints the size of the data type it contains
  * Return: 0 if program runs succesfully
  */
int main(void)
{
	printf("Size of a char: %u byte(s)\n", sizeof(char));
	printf("Size of a int: %u byte(s)\n", sizeof(int));
	printf("Size of a long int: %lu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(long long int));
	printf("Size of float: %lu\n byte(s)", sizeof(float));
	return (0);
}
