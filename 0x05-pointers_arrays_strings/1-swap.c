#include <stdio.h>

/**
 * swap_int - swaps values of two integers
 * @a: the first integ
 * @b: second integer 
 *
 * Return: nothing
 */

void swap_int(int *a, int *b)

{
	int temp = *a;
	*a = *b;
	*b = temp;

}
