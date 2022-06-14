#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints a name as is
 * @name: name of the person
 * @f: function
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (f)
		f(name);
}
