#include "main.h"

/**
  * print_alphabet - prints if number is positive, 0 or negative
  * Return: 0
  */
void print_alphabet(void)
{
	char alphabet;

	for (alphabet = 'a'; alphabet <= 'z'; ++alphabet)
	{
	_putchar(alphabet);
	}

	_putchar('\n');
}
