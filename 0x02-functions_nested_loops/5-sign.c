#include "main.h"

/**
  * print_sign - prints if number is positive, 0 or negative
  * @n: charecter
  * Return: 0
  */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar ('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar ('0');
		return (0);
	}
	else if (n < 0)
	{
		_putchar ('-');
		return (-1);
	}
	else
	{
		return (0);
	}
}
