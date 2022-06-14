#include "lists.h"
/**
 * dlistint_len - check the code
 * @h: head
 * Return: Always EXIT_SUCCESS.
 */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *ptr;
	size_t i = 0;

	for (ptr = h; ptr; ptr = ptr->next, i++)
	{
	}
	return (i);
}
