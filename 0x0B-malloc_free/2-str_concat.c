#include "main.h"
#include <stdlib.h>
/**
 * str_concat - check the code
 * @s1: parameter
 * @s2: parameter
 * Return: Always 0.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	unsigned int i, j, k = 0;

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
	ptr = (char *) malloc(sizeof(char) * (i + j) + 1);
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
	while (*s2 != '\0')
	{
		ptr[k] = *s2;
		s2++;
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
