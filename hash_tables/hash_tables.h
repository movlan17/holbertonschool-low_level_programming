#ifndef HASH_TABLES_H
#define HASH_TABLES_H

#include <stdlib.h>
#include <string.h>

/**
 * struct hash_node_s - Node of a hash table
 *
 * @key: The key, string (unique in the HashTable)
 * @value: The value corresponding to a key
 * @next: A pointer to the next node of the List
 *
 * Description: Node structure for a hash table.
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - Structure of a hash table
 *
 * @size: Size of the array
 * @array: Array of pointers to hash_node_t (linked list for chaining)
 *
 * Description: Structure representing a hash table with*

