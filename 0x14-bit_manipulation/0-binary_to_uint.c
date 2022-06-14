#include "main.h"
/**
 * binary_to_uint - check the code
 * @b: parameter
 * Return: Always 0.
 */
unsigned int binary_to_uint(const char *b)
{
	int i = 0, decval = 1;
	unsigned int sum = 0;

	if (!b)
		return (0);
	while (b[i])
		i++;
	for (i -= 1; i >= 0; i--)
	{
		if (b[i] != '0' && b[i] != '1')
			return (0);
		if (b[i] == '1')
		{
			sum += decval;
		}
		decval *= 2;
	}
	return (sum);
}
