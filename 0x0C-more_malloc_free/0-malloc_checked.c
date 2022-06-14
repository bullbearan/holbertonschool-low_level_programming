#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - check the code
 * @b: parameter
 * Return: Always 0.
 */
void *malloc_checked(unsigned int b)
{
	void *ptr = malloc(b);

	if (ptr == NULL)
	{
		exit(98);
	}
	return (ptr);
}
