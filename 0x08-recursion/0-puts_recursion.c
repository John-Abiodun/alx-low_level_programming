#include "main.h"

/**
 * _puts_recursion - prints a string followed by a line that is new
 * @s: the string that is to be printed
 *
 * Return: Nothing
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
