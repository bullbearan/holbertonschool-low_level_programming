#include "hash_tables.h"
/**
 * hash_table_set - check the code
 * @key: key
 * @value: value
 * @ht: ht
 * Return: Always EXIT_SUCCESS.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new, *ptr;
	unsigned long int idx;

	if (ht == NULL || key[0] == '\0' || key == NULL || value == NULL)
		return (0);

	idx = key_index((unsigned char *)key, ht->size);
	for (ptr = ht->array[idx]; ptr; ptr = ptr->next)
	{
		if (strcmp(ptr->key, key) == 0)
		{
			free(ptr->value);
			ptr->value = strdup(value);
			if (ptr->value == NULL)
				return (0);
			return (1);
		}
	}
	new = malloc(sizeof(hash_node_t));
	if (new == NULL)
		return (0);

	new->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}
	new->value = strdup(value);
	if (new->value == NULL)
	{
		free(new->key);
		free(new);
		return (0);
	}
	new->next = ht->array[idx];
	ht->array[idx] = new;
	return (1);
}
