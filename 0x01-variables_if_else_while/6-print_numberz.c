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
	char a;

	a = '0';
	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
