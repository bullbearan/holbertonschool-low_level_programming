#include "lists.h"
/**
 * insert_dnodeint_at_index - check the code
 * @h: head
 * @idx: position
 * @n: number
 * Return: Always EXIT_SUCCESS.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *new, *ptr, *tmp;

	if (h == NULL)
		return (NULL);
	for (ptr = *h; ptr; ptr = ptr->next, i++)
	{
	}
	if (idx > i)
		return (NULL);
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	ptr = *h;
	for (i = 0; ptr; ptr = ptr->next, i++)
	{
		if (i == idx)
		{
			new->n = n;
			new->next = ptr;
			new->prev = ptr->prev;
			ptr->prev->next = new;
			ptr->prev = new;
			return (new);
		}
		if (ptr->next == NULL)
			tmp = ptr;
	}
	new->n = n;
	new->prev = tmp;
	tmp->next = new;
	new->next = NULL;
	return (new);
}
