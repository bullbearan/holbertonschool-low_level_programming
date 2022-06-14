#include "main.h"

/**
  * print_last_digit - prints if number is positive, 0 or negative
  * @n: charecter
  * Return: 0
  */
int print_last_digit(int n)
{
	int lastDigit;

	lastDigit = n % 10;
	if (lastDigit < 0)
	{
	lastDigit *= -1;
	}
	_putchar((lastDigit) + '0');
	return (lastDigit);
}
