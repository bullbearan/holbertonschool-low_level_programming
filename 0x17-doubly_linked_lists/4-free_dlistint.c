#include "lists.h"
/**
 * free_dlistint - check the code
 * @head: head
 * Return: Always EXIT_SUCCESS.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *ptr = head;

	while (ptr)
	{
		head = head->next;
		free(ptr);
		ptr = head;
	}
}
