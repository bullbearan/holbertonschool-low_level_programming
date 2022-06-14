#include "main.h"
/**
 * get_bit - check the code
 * @n: parameter
 * @index: parameter
 * Return: Always 0.
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 64)
		return (-1);
	return (n >> index & 1);
}
