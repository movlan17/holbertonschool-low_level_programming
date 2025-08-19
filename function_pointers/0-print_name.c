#include "function_pointers.h"

/**
 * print_name - Prints a name using a callback function
 * @name: The name to print
 * @f: A pointer to a function that takes a string and returns nothing
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != NULL && f != NULL)
		f(name);
}
