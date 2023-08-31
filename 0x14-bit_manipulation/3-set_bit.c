#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1
 * at a given index
 * @n: pointer to set the bit
 * @index: index to set to 1
 *
 * Return: 1 if ti worked, or -1 if an error occured
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(n) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
