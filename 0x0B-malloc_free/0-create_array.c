#include <stdlib.h>
#include "main.h"
/**
 * create_array - check the code
 * @size: parameter
 * @c: parameter
 * Return: Always 0.
 */
char *create_array(unsigned int size, char c)
{
	char *ptr = (char *) malloc(size * sizeof(char));
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			ptr[i] = c;
		}
	}
	return (ptr);
}
