#include "main.h"

/**
 * _strncat - check the code
 * @dest: parameter
 * @src: parameter
 * @n: parameter
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0; /* dest index length */
	int j = 0; /* src index length */

	while (dest[i] != '\0')
	{
	i++;
	}
	while (j < n && src[j] != '\0')
	{
	dest[i + j] = src[j];
	j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
