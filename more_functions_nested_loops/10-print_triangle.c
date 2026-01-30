#include "main.h"

/**
 * print_triangle - prints a triangle using the # character
 * @size: size of the triangle
 *
 * Return: void
 */
void print_triangle(int size)
{
    int row, col;

    if (size <= 0)
    {
        _putchar('\n');
        return;
    }

    for (row = 1; row <= size; row++)
    {
        /* print spaces before the #s */
        for (col = 1; col <= size - row; col++)
            _putchar(' ');

        /* print the #s */
        for (col = 1; col <= row; col++)
            _putchar('#');

        /* new line after each row */
        _putchar('\n');
    }
}

