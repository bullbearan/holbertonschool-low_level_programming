#include "lists.h"
/**
 * insert_nodeint_at_index - check the code
 * @head: parameter
 * @idx: parameter
 * @n: parameter
 * Return: Always 0.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current;
	unsigned int i = 1;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		if (idx > 0)
		{
			current = *head;
			while (current)
			{
				if (i == idx)
				{
					new->next = current->next;
					current->next = new;
					return (new);
				}
				current = current->next;
				i++;
			}
			if (idx > i)
				return (NULL);
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	return (NULL);
}
