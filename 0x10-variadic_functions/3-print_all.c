#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - check the code
 * @format: parameter
 * Return: Always 0.
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *sep = ", ";
	char *str;

	va_start(ap, format);

	while (format && format[j])
		j++;

	while (format && format[i])
	{
		if (i  == (j - 1))
		{
			sep = "";
		}
		switch (format[i])
		{
			case 'c':
				printf("%c%s", va_arg(ap, int), sep);
				break;
			case 'i':
				printf("%d%s", va_arg(ap, int), sep);
				break;
			case 'f':
				printf("%f%s", va_arg(ap, double), sep);
				break;
			case 's':
				str = va_arg(ap, char *);
			if (str == NULL)
				str = "(nil)";
			printf("%s%s", str, sep);
			break;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
