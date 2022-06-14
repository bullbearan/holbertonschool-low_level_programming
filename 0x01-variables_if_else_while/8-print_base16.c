#include <stdio.h>

/**
  * main - prints if number is positive, 0 or negative
  * Return: 0
  */
int main(void)
{
	char alphabet;

	for (alphabet = '0'; alphabet <= '9'; ++alphabet)
	{
	putchar(alphabet);
	}

	for (alphabet = 'a'; alphabet <= 'f'; ++alphabet)
	{
	putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
