#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - check the code
 * @argc: parameter
 * @argv: parameter
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i;
	int prev = 0;
	int j;

		for (i = 1; i < argc; i++)
		{
			for (j = 0; argv[i][j] != '\0'; j++)
			{
				if (isalpha(argv[i][j]))
				{
					printf("Error\n");
					return (1);
				}
			}
			prev += atoi(argv[i]);

		}
	printf("%d\n", prev);
	return (0);
}
