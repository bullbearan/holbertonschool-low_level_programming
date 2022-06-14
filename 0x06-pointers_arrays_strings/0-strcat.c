#include "main.h"

/**
 * _strcat - check the code
 * @dest: paramter
 * @src: paramter
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int i = 0; /* dest index length */
	int j = 0; /* src index length */

	while (dest[i] != '\0')
	{
	i++;
	}
	while (src[j] != '\0')
	{
	dest[i + j] = src[j];
	j++;
	}
	dest[i + j] = '\0';
	return (dest);
}
