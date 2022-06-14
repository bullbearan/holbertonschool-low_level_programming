#include <stdio.h>
#include <stdlib.h>
/**
 * main - prints a name as is
 * @argc: name of the person
 * @argv: function
 * Return: Nothing.
 */
int main(int argc, char **argv)
{
	char *ptr;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("Error\n");
		exit(2);
	}
	ptr = (char *)main;
	for (i = 0; i < atoi(argv[1]) - 1; i++)
		printf("%02hhx ", ptr[i]);
	printf("%02hhx\n", ptr[i]);
	return (0);
}
