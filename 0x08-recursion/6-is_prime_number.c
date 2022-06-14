#include "main.h"
/**
 * _prime_counter - check the code
 * @n: parameter
 * @i: paremeter
 * Return: Always 0.
 */
int _prime_counter(int n, int i)
{
	if (i == 1)
	{
		return (1);
	}
	if (n % i == 0)
	{
		return (0);
	}
	else
	{
		return (_prime_counter(n, i - 1));
	}
}
/**
 * is_prime_number - check the code
 * @n: parameter
 * Return: Always 0.
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (_prime_counter(n, n - 1));
}
