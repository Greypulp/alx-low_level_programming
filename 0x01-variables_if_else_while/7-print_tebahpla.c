#include <stdio.h>
/**
 * main - Prog Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	x = 'z';
	for (x >= 'a'; x--)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
