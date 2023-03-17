#include <stdio.h>

/**
 * main - Entry point
 *
 * program prints all small and capital letters
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, x;

	n = 97;
	while (n < 123)
	{
		putchar(n);
		n++;
	}
	x = 65;
	while (x < 91)
	{
		putchar(x);
		x++;
	}
	putchar('\n');
	return (0);
}
