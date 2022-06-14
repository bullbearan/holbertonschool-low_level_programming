#include "main.h"

/**
 * print_square - check the code
 *@size: parameter
 * Return: Always 0.
 */
void print_square(int size)
{
	int i, n;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
	for (i = 0; i < size; i++)
	{
	for (n = 0; n < size; n++)
		{
	_putchar(35);
		}
	_putchar('\n');
	}
	}
}
