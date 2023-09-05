#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *   * str_concat - Concatenates two strings of any size
 *     * @s1: the first string to concatenate
 *       * @s2: the second string to concatenate
 *         *
 *           * Return: the two strings concatenated
 */
char *str_concat(char *s1, char *s2)
{
	size_t len1, len2, i, j;
	char *ptr;

	if  (s1 == NULL)
	{
		s1 = "";
	}

	if (s2 == NULL)
	{
		s2 = "";
	}

	len1 = 0;
	while (s1[len1] != '\0')
	{
		len1++;
	}
	len2 = 0;
	while (s2[len2] != '\0')
	{
		len2++;
	}
	ptr = malloc(sizeof(char) * (len1 + len2 + 1));

	if (ptr == NULL)
	{
		free(ptr);
		return (NULL);
	}
	for (i = 0;  i < len1; i++)
	{
		ptr[i] = s1[i];
	}
	for (j = 0; j <= len2; j++)
	{
		ptr[i] = s2[j];
		i++;
	}
	return (ptr);
}
