#ifndef HASH_TABLES_H
#define HASH_TABLES_H

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, a string (unique in the hash table)
 * @value: The value corresponding to a key
 * @next: Pointer to the next node in the list (handles collisions)
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Hash table data structure
 *
 * @size: The size of the array
 * @array: An array of size @size. Each element is a pointer to the first
 *         node of a linked list (for collision resolution).
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;

#endif /* HASH_TABLES_H */

