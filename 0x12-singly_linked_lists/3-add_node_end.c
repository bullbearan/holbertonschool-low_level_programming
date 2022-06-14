#include "lists.h"
/**
 * add_node_end - check the code
 * @head: parameter
 * @str: parameter
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int i = 0;
	list_t *new, *tmp;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	while (str[i])
		i++;

	new->len = i;
	new->str = strdup(str);
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	tmp = *head;

	while (tmp->next != NULL)
		tmp = tmp->next;
	tmp->next = new;
	return (new);
}
