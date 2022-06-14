#include "main.h"

/**
 * _strncpy - check the code
 * @dest: parameter
 *@src: parameter
 *@n: paremeter
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0; /* dest index length */

	while (src[i] != '\0' && i < n)
	{
	dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
