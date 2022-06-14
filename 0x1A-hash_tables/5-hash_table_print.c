#include "hash_tables.h"
/**
 * hash_table_print - check the code
 * @ht: hash table
 * Return: Always EXIT_SUCCESS.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i, j = 0;
	hash_node_t *ptr;

	if (ht == NULL)
		return;
	putchar('{');
	for (i = 0; i < ht->size; i++)
	{
		if (ht->array[i])
			for (ptr = ht->array[i]; ptr; ptr = ptr->next)
			{
				if (j != 0)
					printf(", ");
				printf("'%s': '%s'", ptr->key, ptr->value);
				j = 1;
			}
	}
	printf("}\n");
}
