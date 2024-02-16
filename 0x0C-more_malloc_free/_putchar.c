#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: character to be printed
 *
 * Return: on success 1
 * On error, -1 is returned, the errno is set appropriately
 */

itn_putchar(char c)
{
	return (write(1, &c, 1));
}
