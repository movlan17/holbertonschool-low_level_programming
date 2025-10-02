#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 times in lowercase,
 * followed by a new line each time
 */
void print_alphabet_x10(void)
{
	int i = 0;
	char c;

	while (i < 10)
	{
		c = 'a';
		while (c <= 'z')
		{
			_putchar(c);
			c++;
		}
		_putchar('\n');
		i++;
	}
}

