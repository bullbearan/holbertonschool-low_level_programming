#include <stdio.h>

/**
  * main - prints if number is positive, 0 or negative
  * Return: 0
  */
int main(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z' ; ++alphabet)
	{
	if (alphabet != 'e' && alphabet != 'q')
	{
	putchar(alphabet);
	}
	}

	putchar('\n');
	return (0);
}
