#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9
 *
 * Return: void
 */
void print_numbers(void)
{
	char numbers[] = "0123456789\n";
	int i;

	for (i = 0; numbers[i] != '\0'; i++)
		_putchar(numbers[i]);
}

