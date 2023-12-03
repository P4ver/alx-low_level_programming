#include "hash_tables.h"
/**
 * hash_table_delete - functn that deletes a hash tble,
 * @ht: hash tbl to add,
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int q;
	hash_node_t *crn_a;
	hash_node_t *next;

	if (ht == NULL)
		return;
	for (q = 0; q < ht->size; ++q)
	{
		crn_a = ht->array[q];
		while (crn_a != NULL)
		{
			next = crn_a->next;
			free(crn_a->key);
			free(crn_a->value);
			free(crn_a);
			crn_a = next;
		}
	}
	free(ht->array);
	free(ht);
}
