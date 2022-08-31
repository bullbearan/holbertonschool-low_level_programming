#include "search_algos.h"
/**
 * s - Entry point
 * @array: yes
 * @l: yes
 * @r: yes
 * @value: yes
 * Return: Always EXIT_SUCCESS
 */
int s(int *array, int l, int r, int value)
{
	if (r >= l)
	{
		int m = l + (r - l) / 2;
		int i;
		int flag = 0;

		printf("Searching in array: ");
		for (i = l; i <= r; i++)
		{
			if (flag)
				printf(", ");
			printf("%d", array[i]);
			flag = 1;
		}
		printf("\n");
		if (array[m] == value)
			return (m);
		if (array[m] > value)
		{
			return (s(array, l, m - 1, value));
		}
		return (s(array, m + 1, r, value));
	}
	return (-1);
}
/**
 * binary_search - Entry point
 * @array: yes
 * @size: yes
 * @value: yes
 * Return: Always EXIT_SUCCESS
 */
int binary_search(int *array, size_t size, int value)
{
	if (array == NULL)
		return (-1);
	return (s(array, 0, size - 1, value));
}
