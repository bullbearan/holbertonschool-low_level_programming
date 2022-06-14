#include "lists.h"
/**
 * free_listint2 - check the code
 * @head: parameter
 * Return: Always 0.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;

	if (head == NULL)
		return;
	while (*head)
	{
		tmp = *head;
		*head = (*head)->next;
		free(tmp);
	}
	*head = NULL;
}
