#include "main.h"

/**
 * clear_bit - a function that sets the value of a
 * bit to 0 at a given index
 * @n: pointer to the index of bit to set
 * @index: index of the bit tot set
 *
 * Return: 1 if it worked ot -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > (sizeof(n) * 8))
		return (-1);
	*n = *n & ~(1 << index);
	return (0);
}
