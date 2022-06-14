#include "hash_tables.h"
/**
 * key_index - check the code
 * @key: key
 * @size: size of the array
 * Return: Always EXIT_SUCCESS.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
