#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hash_tables.h"
/**
 * hash_table_create - function that creates a hash tbl,
 * @size: the size of arr in hash,
 * Return: pntr rto hsh tbl, will return NULL if memor fails,
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int q;
	hash_table_t *nw_tx = malloc(sizeof(hash_table_t));
	if (nw_tx == NULL)
		return (NULL);
	nw_tx->size = size;
	nw_tx->array = malloc(sizeof(hash_table_t *) * size);

	if (nw_tx->array == NULL)
	{
		free(nw_tx);
		return (NULL);
	}
	for (q = 0; q < size; ++q)
		nw_tx->array[q] = NULL;
	return (nw_tx);
}
