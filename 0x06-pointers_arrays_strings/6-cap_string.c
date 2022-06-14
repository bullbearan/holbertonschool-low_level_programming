#include "main.h"

/**
 * cap_string - check the code
 *@s: parameter
 * Return: Always 0.
 */

char *cap_string(char *s)
{
	int i;
	int j;
	char sym[] = {' ', '\t', '\n', ',', ';', '.', '!', '?', '"', '(', ')',
	'{', '}'};

	for (i = 0; s[i] != '\0'; i++)
	{
	if (s[0] >= 'a' && s[0] <= 'z')
	{
	s[0] -= 32;
	}
	for (j = 0; sym[j] != '\0'; j++)
	{
	if (s[i] >= 'a' && s[i] <= 'z')
	{
	if (s[i - 1] == sym[j])
	{
	s[i] -= 32;
	}
	}
	}
	}
	return (s);
}
