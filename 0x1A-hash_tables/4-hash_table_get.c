#include "hash_tables.h"
/**
 * hash_table_get - funct that retrieves a value associated with a key,
 * @ht: the hash tble to add or update,
 * @key: the key,
 * Return: value associated with the elmnt NULL if key is not found,
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int ndx_a;
	hash_node_t *crn_a;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	ndx_a = key_index((unsigned char *)key, ht->size);
	crn_a = ht->array[ndx_a];

	while (crn_a != NULL)
	{
		if (strcmp(crn_a->key, key) == 0)
			return (crn_a->value);
		crn_a = crn_a->next;
	}
	return (NULL);
}
