#include "main.h"

/**
 * swap_int - check the code
 * @a: paremeter
 * @b: parameter
 * Return: Always 0.
 */
void swap_int(int *a, int *b)
{
	int valueA = *a;

	*a = *b;
	*b = valueA;
}
