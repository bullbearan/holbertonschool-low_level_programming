#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - check the code
 * @width: parameter
 * @height: parameter
 * Return: Always 0.
 */
int **alloc_grid(int width, int height)
{
	int **ptr;
	int i, j;

	ptr = (int **) malloc(height * sizeof(int *));
	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		ptr[i] = (int *) malloc(width * sizeof(int));
		if (ptr[i] == NULL)
		{
			for (j = 0; j < i; j++)
			{
				free(ptr[j]);
			}
			free(ptr);
			return (NULL);
		}
		for (j = 0; j < width; j++)
		{
			ptr[i][j] = 0;
		}
	}
	return (ptr);
}
