#include "hash_tables.h"
/**
 * hash_table_get - check the code
 * @ht: hash table
 * @key: key
 * Return: Always EXIT_SUCCESS.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *ptr;
	unsigned long int idx;

	if (ht == NULL || key == NULL)
		return (NULL);
	idx = key_index((unsigned char *)key, ht->size);
	for (ptr = ht->array[idx]; ptr; ptr = ptr->next)
	{
		if (strcmp(ptr->key, key) == 0)
			return (ptr->value);
	}
	return (NULL);
}
