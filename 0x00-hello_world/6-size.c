#include <stdio.h>

/**
 * main - Entry pointA
 *
 * Retun: Always 0 (Success)
 */int main(void)
{
	printf("Size of char: %ld byte(s)\n", sizeof(char));
	printf("Size of int: %ld byte(s)\n", sizeof(int));
	printf("Size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("Size of a float: %ld byte(s)\n", sizeof(float));

	return (0);
}
