#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - Prints anything based on format string
 * @format: A list of types of arguments passed to the function
 *
 * Description:
 * Format chars:
 * 'c' = char
 * 'i' = int
 * 'f' = float
 * 's' = string (if NULL, print (nil))
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *str;
	char *sep = "";

	va_start(args, format);

	while (format && format[i])
	{
		if (
			format[i] == 'c' ||
			format[i] == 'i' ||
			format[i] == 'f' ||
			format[i] == 's'
		)
		{
			printf("%s", sep);
			if (format[i] == 'c')
				printf("%c", va_arg(args, int));
			if (format[i] == 'i')
				printf("%d", va_arg(args, int));
			if (format[i] == 'f')
				printf("%f", (float)va_arg(args, double));
			if (format[i] == 's')
			{
				str = va_arg(args, char *);
				if (!str)
					str = "(nil)";
				printf("%s", str);
			}
			sep = ", ";
		}
		i++;
	}

	printf("\n");
	va_end(args);
}

