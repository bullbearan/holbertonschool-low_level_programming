#include <stdio.h>

/**
  * main - prints if number is positive, 0 or negative
  * Return: 0
  */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
	{
	putchar(alphabet);
	}

	for (alphabet = 'A'; alphabet <= 'Z'; ++alphabet)
	{
	putchar(alphabet);
	}

	putchar('\n');
	return (0);
}
