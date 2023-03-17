#include <stdio.h>

/**
 * main - Entry point
 *
 * this program displays numbers of base 16(lowercase)
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int x;
	char l;

	x = 0;
	l = 'a';
	while (x < 10)
	{
		putchar((x % 10) + '0');
		x++;
	}
	while (l < 'g')
	{
		putchar(l);
		l++;
	}
	putchar('\n');
	return (0);
}
