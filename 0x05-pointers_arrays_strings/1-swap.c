#include "main.h"

/**
 * swap_int - swaps the value of two integers
 *		using two input parameters
 *
 * @a: input pareameter 1
 * @b: input parameter 2
 *
 * return: Nothing
 */
void swap_int(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
