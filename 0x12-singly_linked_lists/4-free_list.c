#include "lists.h"
/**
 * free_list - check the code
 * @head: parameter
 * Return: Always 0.
 */
void free_list(list_t *head)
{
	list_t *next;

	while (head != NULL)
	{
		next = head->next;
		free(head->str);
		free(head);
		head = next;
	}
}
