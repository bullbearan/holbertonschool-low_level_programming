#include <stdio.h>

/**
  * main - prints if number is positive, 0 or negative
  * Return: 0
  */
int main(void)
{
	int base10;

	for (base10 = '0'; base10 <= '9' ; ++base10)
	{
	putchar(base10);
	}

	putchar('\n');
	return (0);
}
