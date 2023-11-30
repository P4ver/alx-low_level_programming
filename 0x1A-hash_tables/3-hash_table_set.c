#include "hash_tables.h"
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int ndx_a;
	hash_node_t *nwnd;

	if (ht == NULL || key == NULL || *key == '\0')
		return 0;
	ndx_a = key_index((unsigned char *)key, ht->size);
	nwnd = malloc(sizeof(hash_node_t));

	if (nwnd == NULL)
		return (0);
	nwnd->key = strdup(key);
	if (nwnd->key == NULL)
	{
		free(nwnd);
		return (0);
	}
	nwnd->value = strdup(value);
	if (nwnd->value == NULL)
	{
		free(nwnd->key);
		free(nwnd);
		return (0);
	}
	nwnd->next = ht->array[ndx_a];
	ht->array[ndx_a] = nwnd;
	return (1);
}
