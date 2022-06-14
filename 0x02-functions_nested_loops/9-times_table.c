#include "main.h"

/**
  * times_table - prints if number is positive, 0 or negative
  * Return: 0
  */
void times_table(void)
{
int a, b, multiplay;

for (a = 0; a < 10; a++)
{
	for (b = 0; b < 10; b++)
	{
		multiplay = (a * b);
		if (b != 0)
		{
		_putchar(',');
		_putchar(' ');
		}
		if (multiplay >= 10)
		{
		_putchar((multiplay / 10) + '0');
		_putchar((multiplay % 10) + '0');
		}
		else if (multiplay < 10 && b != 0)
		{
		_putchar(' ');
		_putchar((multiplay % 10) + '0');
		}
		else
		{
			_putchar((multiplay % 10) + '0');
		}
	}
			_putchar('\n');
}
}
