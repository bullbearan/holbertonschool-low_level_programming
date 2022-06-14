#include <stdio.h>

/**
  * main - prints if number is positive, 0 or negative
  * Return: 0
  */
int main(void)
{
	int singleDigit;
	int comma = ',';
	int space = ' ';

	for (singleDigit = '0'; singleDigit <= '9'; ++singleDigit)
	{
	putchar(singleDigit);
	if (singleDigit != '9')
	{
	putchar(comma);
	putchar(space);
	}
	}

	putchar('\n');
	return (0);
}
