#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table
 * @ht: hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr, *hold;

	if (ht != NULL)
	{
		if (ht->array == NULL)
		{
			free(ht);
			exit(EXIT_SUCCESS);
		}
		for (i = 0; i < ht->size; i++)
		{
			curr = ht->array[i];
			while (curr != NULL)
			{
				hold = curr;
				curr = curr->next;
				free_node(hold);
			}
		}
		free(ht->array);
		free(ht);
	}
}
