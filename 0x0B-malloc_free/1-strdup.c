#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicate a string
 * @str: string to be duplicated
 *
 * Retunr: string duplicated
 */

char *_strdup(char *str)
{
	int a = 0, i =1;
	char *s;

	if (str == NULL)
		return (NULL);

	while (str[i])
	{
		i++;
	}

	s = malloc((size of(char) * i) + 1);

	if (s == NULL)
		return (NULL);

	while (a < i)
	{
		s[a] = str[a];
	}

	s[a] = '\0';
	return (s);
}
