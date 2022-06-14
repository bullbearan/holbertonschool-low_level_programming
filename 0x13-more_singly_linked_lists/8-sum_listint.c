#include "lists.h"
/**
 * sum_listint - check the code
 * @head: parameter
 * Return: Always 0.
 */
int sum_listint(listint_t *head)
{
	int i, sum = 0;

	for (i = 0; head; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
