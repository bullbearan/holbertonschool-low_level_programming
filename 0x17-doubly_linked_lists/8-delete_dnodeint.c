#include "lists.h"
/**
 * delete_dnodeint_at_index - check the code
 * @head: head
 * @index: position
 * Return: Always EXIT_SUCCESS.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i;
	dlistint_t *ptr;

	if (head == NULL || *head == NULL)
		return (-1);
	ptr = *head;
	if (index > 0)
	{
		for (i = 0; ptr->next; ptr = ptr->next, i++)
		{
			if (i == index)
			{
				ptr->next->prev = ptr->prev;
				ptr->prev->next = ptr->next;
				free(ptr);
				return (1);
			}
		}
		if (index > i)
			return (-1);
		ptr->prev->next = NULL;
		free(ptr);
		return (1);
	}
	*head = (*head)->next;
	if (*head)
		(*head)->prev = NULL;
	free(ptr);
	ptr = NULL;
	return (1);
}
