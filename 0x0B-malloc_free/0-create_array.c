#include "main.h"
#include <stdlib.h>

/**
 *   * create_array - creates an array of chars
 *     * @size: The size of the array
 *       * @c: The char to fill in the array
 *         *
 *           * Return: The array filled
 */
char *create_array(unsigned int size, char c)
{
	size_t i;
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(char) * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < size; i++)
	{
		ptr[i] = c;
	}
	return (ptr);
}
