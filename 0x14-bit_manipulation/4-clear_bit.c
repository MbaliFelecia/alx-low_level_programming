#include "main.h"

/**
 * claer_bit - sets the value of bit to 0.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it did not.
 */
int clear_bit(unsigned long int *n, unsigned int)
{
	unsigned int b;

	if (index > 63)
		return (-1);

	b = 1 << index;

	if (*n & b)
		*n ^= b;

	return(1);
}
