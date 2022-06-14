#include "main.h"
#include <stdlib.h>
/**
 * argstostr - check the code
 * @ac: parameter
 * @av: parameter
 * Return: Always 0.
 */
char *argstostr(int ac, char **av)
{
	char *ptr;
	int i, j, k = 0, l = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			l++;
		}
	}
	ptr = (char *) malloc(sizeof(char) * l + 10);
	if (ptr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			ptr[k] = av[i][j];
			k++;
		}
		ptr[k] = '\n';
		k++;
	}
	ptr[k] = '\0';
	return (ptr);
}
