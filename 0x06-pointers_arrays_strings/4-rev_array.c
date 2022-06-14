#include "main.h"

/**
 * reverse_array - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */

void reverse_array(int *a, int n)
{
	int tmp;
	int i = 0;

	while (i < n / 2)
	{
	tmp = a[n - i - 1];
	a[n - i - 1] = a[i];
	a[i] = tmp;
	i++;
	}
}
