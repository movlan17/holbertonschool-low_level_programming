#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard
 * @filename: file path to read
 * @letters: count of character to read
 *
 * Return: count of written bytes, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *f;
	int i;
	char *b;
	ssize_t bytes_read;

	if (filename == NULL)
		return (0);

	f = fopen(filename, "r");
	if (f == NULL)
		return (0);

	b = malloc(sizeof(char) * letters);

	if (!b)
	{
		fclose(f);
		return (0);
	}
	bytes_read = fread(b, sizeof(char), letters, f);

	for (i = 0; i < bytes_read; i++)
		putchar(b[i]);
	free(b);
	fclose(f);
	return (bytes_read);
}
