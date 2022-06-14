#include "main.h"
/**
 * get_endianness - check the code
 * Return: Always 0.
 */
int get_endianness(void)
{
	unsigned int x = 1;
	char *c = (char *) &x;

	return ((int) *c);
}
