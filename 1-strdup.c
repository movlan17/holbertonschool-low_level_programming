#include <stdlib.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to duplicate
 *
 * Return: pointer to the duplicated string,
 * or NULL if str = NULL or malloc fails
 */
char *_strdup(char *str)
{
	char *dup;
	int i, len = 0;

	if (str == NULL)
		return (NULL);

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

	return (dup);
}

