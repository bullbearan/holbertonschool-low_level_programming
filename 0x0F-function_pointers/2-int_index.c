#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - prints a name as is
 * @array: name of the person
 * @size: function
 * @cmp: function
 * Return: Nothing.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (cmp && size > 0 && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
return (-1);
}
