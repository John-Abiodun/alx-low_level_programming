#include <stdio.h>

#include <stdlib.h>

#include <time.h>

/**
 * main - prints all possible combinations of single-digit numbers
 * Return: Always 0 (Success)
 */

int main(void)

{
	int l;

	for (l = '0'; l <= '9'; l++)
	{
	putchar(l);
	if (l != '9')
	{
	putchar(',');
	putchar(' ');
	}
	}
	putchar('\n');
	return (0);

}
