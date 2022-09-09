#include <stdio.h>

/**
 * main - Entry Point
 *
 * Description: prints the size of various data types
 *
 * Return: Always 0 (Success)
 *
 */

int main(void)
{	
	printf("Size of a char: %ld byte(s)\n", (int)sizeof(char));
	printf("Size of an int: %ld byte(s)\n", (int)sizeof(int));
	printf("Size of a long int: %ld byte (s)\n", (int)sizeof(long int));
	printf("Size of a long long int: %ld byte (s)\n", (int)sizeof(long long int));
	printf("Size of a float: %ld byte (s)\n", (int)sizeof(float));
	return (0);
}
