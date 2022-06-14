#include "lists.h"
/**
 * print_dlistint - check the code
 * @h: head
 * Return: Always EXIT_SUCCESS.
 */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t i = 0;

	for (ptr = h; ptr; ptr = ptr->next, i++)
	{
		printf("%d\n", ptr->n);
	}
	return (i);
}
