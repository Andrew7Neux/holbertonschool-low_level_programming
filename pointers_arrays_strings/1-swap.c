#include "main.h"
/**
 * swap_int - swap integer values
 * @a: the first var to swap
 * @b: the second var to swap
 */
void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
