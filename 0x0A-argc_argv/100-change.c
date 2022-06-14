#include <stdio.h>
#include <stdlib.h>
/**
 * main - check the code
 * @argc: parameter
 * @argv: parameter
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, money, j;
	int values[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (atoi(argv[1]) < 0)
	{
		printf("0\n");
	}
	else
	{
		j = 0;
		money = atoi(argv[1]);
		for (i = 0; money != 0; i++)
		{
			if (values[i] <= money)
			{
				j += money / values[i];
				money %= values[i];
			}
		}
		printf("%d\n", j);
	}
	return (0);
}
