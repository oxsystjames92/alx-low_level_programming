#include <stdio.h>

/**
 * main - print if th number is positive, zer, or negative
 *
 * Description: using the main function
 * this program prints "Programming is positive, zero, or negattive"
 * Return: 0
 */
int main(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		putchar(c);
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
	putchar('\n');
return (0);
}
