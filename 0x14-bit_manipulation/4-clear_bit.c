#include "main.h"
/**
 * clear_bit - check the code
 * @n: parameter
 * @index: parameter
 * Return: Always 0.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 64)
		return (-1);
	*n &= ~(1 << index);
		return (1);
}
