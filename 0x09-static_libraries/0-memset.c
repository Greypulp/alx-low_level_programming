#include "main.h"

/**
 * _memset - fucntion that fills memory with byte
 * @s: pointer
 * @b: character
 * @n: number of characters
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
