#include <stdio.h>

/**
 * main - Entry point
 *
 * program that display postive numbers up to 10
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;

	x = 0;
	while (x < 10)
	{
		printf("%d", x);
		x++;
	}
	printf("\n");
	return (0);
}
