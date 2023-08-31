#include "main.h"

/**
 * print_binary - a function that prints the binary
 * representation of a number
 * @n: number to print binary form
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	int i, result, count = 0;
	
	for (i = 63; i >= 0; i--)
	{
		result = n >> i;
		if (result & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
