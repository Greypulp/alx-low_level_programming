#include <stdio.h>
/**
 * main - Prog Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	x = 'z';
	while (x >= 'a')
	{
		putchar(x);
		x--;
	}
	putchar('\n');
	return (0);
}
