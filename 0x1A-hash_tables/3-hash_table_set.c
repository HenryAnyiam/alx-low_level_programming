#include "hash_tables.h"

/**
 * free_node - free a hash node
 * @data: pointer to hash node
 */
void free_node(hash_node_t *data)
{
	free(data->key);
	free(data->value);
	free(data);
}

/**
 * hash_table_set - insert a hash data into a table
 * @ht: hash table
 * @key: hash key
 * @value: hash value
 * )
 * Return: 1 on success else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *data, *curr, *prev = NULL;

	if (strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	data = malloc(sizeof(hash_node_t));
	if (data == NULL)
		return (0);
	data->key = strdup(key);
	data->value = strdup(value);
	if (ht->array[index] == NULL)
	{
		data->next = NULL;
		ht->array[index] = data;
		return (1);
	}
	curr = ht->array[index];
	while (curr != NULL)
	{
		if (strcmp(curr->value, data->value) == 0)
		{
			data->next = curr->next;
			if (prev != NULL)
				prev->next = data;
			else
				ht->array[index] = data
			free_node(curr);
			return (1);
		}
		prev = curr;
		curr = curr->next;
	}
	data->next = ht->array[index];
	ht->array[index] = data;
	return (1);
}
