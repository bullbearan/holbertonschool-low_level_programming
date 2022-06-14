#include "lists.h"
/**
 * get_dnodeint_at_index - check the code
 * @head: head
 * @index: index
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *ptr;
	unsigned int i = 0;

	for (ptr = head; ptr; ptr = ptr->next, i++)
	{
		if (index == i)
			return (ptr);
	}
	return (NULL);
}
