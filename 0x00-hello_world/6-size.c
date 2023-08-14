#include <stdio.h>
/**
  * main - program starts here
  * printf: prints content to the screen
  * sizeof: prints the size of the data type it contains
  * return: always 0 if program runs succesfully
  */
int main(void)
{
	printf("Size of a char: %lu\n", sizeof(char));
	printf("Size of a int: %lu\n", sizeof(int));
	printf("Size of a long int: %lu\n", sizeof(long int));
	printf("Size of a long long int: %llu\n", sizeof(long long int));
	printf("Size of float: &llu\n", sizeof(float));
	return (0);
}
