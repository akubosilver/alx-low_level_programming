#include "main.h"
#include <stddef.h>

/**
 * int binary_to_uint - a function that converts a
 * binary number to an unsigned int
 * @b: binary number to convert to unsigned int
 *
 * Return: converted number or 0 if character values or b = NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int dec = 0, i;

	if (b == NULL)
		return (0);
	for (i = 0; b[i] != '\0'; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		dec = 2 * dec + (b[i] - '0');
	}
	return (dec);
}
