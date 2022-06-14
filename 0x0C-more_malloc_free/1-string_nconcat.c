#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - check the code
 * @s1: parameter
 * @s2: parameter
 * @n: parameter
 * Return: Always 0.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr;
	unsigned int i, j, k = 0, p = 0;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; s1[i] != '\0'; i++)
	{
	}
	for (j = 0; s2[j] != '\0'; j++)
	{
	}
	if (n >= j)
	{
		n = j;
	}
	ptr = malloc(sizeof(char) * (i + n + 1));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (*s1 != '\0')
	{
		ptr[k] = *s1;
		s1++;
		k++;
	}
	while (p < n && *s2 != '\0')
	{
		ptr[k + p] = *s2;
		s2++;
		p++;
	}
	ptr[k + p] = '\0';
	return (ptr);
}
