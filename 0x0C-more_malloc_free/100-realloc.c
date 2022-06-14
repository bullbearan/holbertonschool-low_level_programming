#include "main.h"
#include <stdlib.h>
/**
 * _realloc - prints buffer in hexa
 * @ptr: the address of memory to print
 * @old_size: the size of the memory to print
 * @new_size: parameter
 * Return: Nothing.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *ptrOld = ptr;
	char *ptrNew;

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (!ptr)
	{
		return (malloc(new_size));
	}
	else if (new_size == old_size)
	{
		return (ptr);
	}
	ptrNew = malloc(new_size);

		if (ptrNew == NULL)
		{
			return (NULL);
		}
	if (new_size > old_size)
	{
		if (ptrNew)
		{
			for (i = 0; i < old_size; i++)
			{
				ptrNew[i] = ptrOld[i];
			}
		free(ptr);
		}
	}
	return (ptrNew);
}
