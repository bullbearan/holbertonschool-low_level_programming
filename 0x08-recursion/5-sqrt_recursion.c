#include "main.h"
/**
 * _sqrt_counter - check the code
 * @n: parameter
 * @i: paremeter
 * Return: Always 0.
 */
int _sqrt_counter(int n, int i)
{
	if (n < i)
	{
		return (-1);
	}
	if (i * i == n)
	{
		return (i);
	}
	else
	{
		return (_sqrt_counter(n, i + 1));
	}
}
/**
 * _sqrt_recursion - check the code
 * @n: parameter
 * Return: Always 0.
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_counter(n, 1));
}
