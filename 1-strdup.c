#include <stdlib.h>
<<<<<<< HEAD

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string,
 * or NULL if str = NULL or malloc fails
=======
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *           which contains a copy of the string given as a parameter.
 * @str: the string to duplicate
 *
 * Return: pointer to the duplicated string, or NULL if str is NULL
 *         or if memory allocation fails
>>>>>>> 456df29 (sdasad)
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

<<<<<<< HEAD
	/* find length of the string */
	while (str[len] != '\0')
		len++;

	/* allocate memory for duplicate string + null terminator */
	dup = malloc(sizeof(char) * (len + 1));

	if (dup == NULL)
		return (NULL);

	/* copy string */
	for (i = 0; i < len; i++)
		dup[i] = str[i];

	dup[len] = '\0';

=======
	for (i = 0; str[i]; i++)
		len++;

	dup = malloc(sizeof(char) * (len + 1));
	if (dup == NULL)
		return (NULL);

	for (i = 0; str[i]; i++)
		dup[i] = str[i];

	dup[i] = '\0';
>>>>>>> 456df29 (sdasad)
	return (dup);
}

