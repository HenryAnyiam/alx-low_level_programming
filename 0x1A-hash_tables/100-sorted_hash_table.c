#include "hash_tables.h"

/**
 * shash_table_create - create a sorted hash table
 * @size: size of sorted hash table
 * )
 * Return: table or NULL
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *table;
	unsigned long int i;

	table = malloc(sizeof(shash_table_t));
	if (table == NULL)
		return (NULL);
	table->size = size;
	table->array = malloc(sizeof(shash_node_t *) * size);
	if (table->array == NULL)
	{
		free(table);
		return (NULL);
	}
	for (i = 0; i < size; i++)
		table->array[i] = NULL;
	table->shead = NULL;
	table->stail = NULL;
	return (table);
}

/**
 * free_snode - free a hash node
 * @data: pointer to hash node
 */
void free_snode(shash_node_t *data)
{
	free(data->key);
	free(data->value);
	free(data);
}

/**
 * shash_table_set - insert a hash data into a table
 * @ht: hash table
 * @key: hash key
 * @value: hash value
 * )
 * Return: 1 on success else 0
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t *data, *curr;

	if (ht == NULL || ht->array == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	data = malloc(sizeof(shash_node_t));
	if (data == NULL)
		return (0);
	data->key = strdup(key);
	data->value = strdup(value);
	curr = ht->array[index];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
		{
			free(curr->value);
			curr->value = strdup(value);
			free_snode(data);
			return (1);
		}
		curr = curr->next;
	}
	data->next = ht->array[index];
	ht->array[index] = data;
	insert_s(ht, data);
	return (1);
}

/**
 * insert_s - insert into a sorted linked list
 * @ht: hash table
 * @data:  new data
 * )
 * Return: 0
 */
int insert_s(shash_table_t *ht, shash_node_t *data)
{
	shash_node_t *curr;

	if (ht->shead == NULL)
	{
		ht->shead = data;
		ht->stail = data;
		data->sprev = NULL;
		data->snext = NULL;
		return (0);
	}
	curr = ht->shead;
	if (curr->snext == NULL && (curr->key[0] > data->key[0]))
	{
		data->sprev = NULL;
		data->snext = curr;
		curr->sprev = data;
		ht->shead = data;
		return (0);
	}
	while (curr->snext != NULL)
	{
		if (curr->key[0] < data->key[0])
			curr = curr->snext;
		else
		{
			if (curr->sprev != NULL)
				curr->sprev->snext = data;
			else
				ht->shead = data;
			data->sprev = curr->sprev;
			curr->sprev = data;
			data->snext = curr;
			return (0);
		}
	}
	curr->snext = data;
	data->sprev = curr;
	data->snext = NULL;
	ht->stail = data;
	return (0);
}

/**
 * shash_table_get - retrieves a value associated with a key
 * @ht: hash table
 * @key: key
 * )
 * Return: Value or NULL
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *curr;

	if (ht == NULL || ht->array == NULL)
		return (NULL);
	if (strlen(key) == 0)
		return (NULL);
	index = key_index((const unsigned char *) key, ht->size);
	curr = ht->array[index];
	while (curr != NULL)
	{
		if (strcmp(curr->key, key) == 0)
			return (curr->value);
		curr = curr->next;
	}
	return (NULL);
}

/**
 * shash_table_print - prints a hash table
 * @ht: hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *curr, *coll;

	if (ht != NULL && ht->array != NULL)
	{
		curr = ht->shead;
		printf("{");
		while (curr != NULL)
		{
			printf("'%s': '%s'", curr->key, curr->value);
			coll = curr->next;
			while (coll != NULL)
			{
				printf("'%s': '%s'", coll->key, coll->value);
				if (coll->next != NULL && coll->snext != NULL)
					printf(", ");
				coll = coll->next;
			}
			curr = curr->snext;
			if (curr != NULL)
				printf(", ");
		}
		printf("}\n");
	}
}

/**
 * shash_table_print_rev - print linked list in reverse
 * @ht: hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *curr, *coll;

	if (ht != NULL && ht->array != NULL)
	{
		curr = ht->stail;
		printf("{");
		while (curr != NULL)
		{
			printf("'%s': '%s'", curr->key, curr->value);
			coll = curr->next;
			while (coll != NULL)
			{
				printf("'%s': '%s'", coll->key, coll->value);
				if (coll->next != NULL && coll->snext != NULL)
					printf(", ");
				coll = coll->next;
			}
			curr = curr->sprev;
			if (curr != NULL)
				printf(", ");
		}
		printf("}\n");
	}
}

/**
 * shash_table_delete - deletes a hash table
 * @ht: hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	unsigned long int i;
	shash_node_t *curr, *hold;

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
				free_snode(hold);
			}
		}
		free(ht->array);
		free(ht);
	}
}
