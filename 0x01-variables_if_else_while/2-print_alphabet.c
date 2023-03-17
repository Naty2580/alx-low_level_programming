#include <stdio.h>

/**
 * main - Entry point
 *
 * program prints all small letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	n = 97;
	while (n < 123)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
