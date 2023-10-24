#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to print
 * @f: pointer to function
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *x))
{
	if (name != NULL && f != NULL)
		f(name);
}
