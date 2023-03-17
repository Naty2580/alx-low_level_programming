#include <stdio.h>

/**
 * main - Entry point
 *
 * program which print number from 0-10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	a = 48;
	while (a < 58)
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
