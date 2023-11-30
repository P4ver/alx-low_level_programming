#include "hash_tables.h"
/**
 * hash_table_print -  functn that prints a hash tble,
 * @ht: the hash tble to add,
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int q;
	hash_node_t *crn_a;

	if (ht == NULL)
		return;
	printf("{");
	for (q = 0; q < ht->size; ++q)
	{
		crn_a = ht->array[q];
		while (crn_a != NULL)
		{
			printf("'%s': '%s'", crn_a->key, crn_a->value);
			if (q < ht->size - 1 || crn_a->next != NULL)
				printf(", ");
			crn_a  = crn_a->next;
		}
	}
	printf("}\n");
}
