#include "lists.h"
/**
 * add_node - check the code
 * @head: parameter
 * @str: parameter
 * Return: Always 0.
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tmp;
	int i = 0;

	tmp = malloc(sizeof(list_t));
	if (tmp == NULL)
		return (NULL);
	tmp->str = strdup(str);
	tmp->next = NULL;

	while (str[i])
		i++;
	tmp->len = i;

	tmp->next = *head;
	*head = tmp;
	return (tmp);
}
