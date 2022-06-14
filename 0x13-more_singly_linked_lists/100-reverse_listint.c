#include "lists.h"
/**
 * reverse_listint - check the code
 * @head: parameter
 * Return: Always 0.
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prevNode;
	listint_t *curNode;

	if (!*head)
		return (NULL);
	if (*head != NULL)
	{
		prevNode = *head;
		curNode = (*head)->next;
		*head = (*head)->next;

		prevNode->next = NULL;

		while (*head != NULL)
		{
			*head = (*head)->next;
			curNode->next = prevNode;

			prevNode = curNode;
			curNode = *head;
		}

		*head = prevNode;
}
	return (prevNode);
}
