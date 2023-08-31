#include "main.h"

/**
 * get_bit - a function that returns the value of a bit
 * at a given index
 * @n: number to convert to bit
 * @index: index of bit to retrive
 *
 * Return: index of bit or -1 if error
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	bit = (n >> index);
	if (index > 64)
		return (-1);
	return (bit & 1);
}
