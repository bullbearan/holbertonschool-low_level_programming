#include "lists.h"
/**
 * get_nodeint_at_index - check the code
 * @head: parameter
 * @index: parameter
 * Return: Always 0.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; head; i++)
	{
		if (i == index)
			return (head);
		head = head->next;
	}
	return (head);
}
