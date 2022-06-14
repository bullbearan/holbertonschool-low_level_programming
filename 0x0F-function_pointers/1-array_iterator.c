#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - prints a name as is
 * @array: name of the person
 * @size: function
 * @action: funcion
 * Return: Nothing.
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

		if (action && array)
		{
		for (i = 0; i < size; i++)
			action(array[i]);
		}
}
