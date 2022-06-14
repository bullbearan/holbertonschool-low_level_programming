#include "main.h"
/**
 * flip_bits - check the code
 * @n: parameter
 * @m: parameter
 * Return: Always 0.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int count = 0;
	unsigned long int a = n ^ m;

	for (a = n ^ m; a != 0; a = a >> 1)
		count += a & 1;

	return (count);
}
