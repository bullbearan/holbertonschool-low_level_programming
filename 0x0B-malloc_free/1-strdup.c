#include "main.h"
#include <stdlib.h>
/**
 * _strdup - check the code
 * @str: parameter
 * Return: Always 0.
 */
char *_strdup(char *str)
{
	char *ptr;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
	{
	}
	ptr = (char *) malloc(sizeof(char) * i + 1);
	if (ptr == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; str[i] != '\0'; i++)
		{
			ptr[i] = str[i];
		}
		ptr[i] = '\0';
	}
	return (ptr);
}
