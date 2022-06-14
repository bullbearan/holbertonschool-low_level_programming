#include "main.h"

/**
 * rev_string - check the code
 * @s: parameter
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int i, temp;
	int length = 0;

	while (s[length] != '\0')
	{
	length++;
	}
	for (i = 0; i < length / 2; i++)
	{
	temp = s[i];
	s[i] = s[length - i - 1];
	s[length - i - 1] = temp;
	}
}
