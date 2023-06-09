#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *curr;
	int check = 0;

	if (ht != NULL)
	{
		printf("{");
		if (ht->array == NULL)
		{
			printf("}\n");
			exit(EXIT_SUCCESS);
		}
		for (i = 0; i < ht->size; i++)
		{
			curr = ht->array[i];
			while (curr != NULL)
			{
				if (check == 0)
				{
					printf("'%s' : '%s'", curr->key, curr->value);
					check = 1;
				}
				else
					printf(", '%s' : '%s'", curr->key, curr->value);
				curr = curr->next;
			}
		}
		printf("}\n");
	}
}
