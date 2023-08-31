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
    if (b == NULL)
        return  (0);
    unsigned int result = 0;
    int i = 0;

    while (b[i] != '\0')
    {
        if (b[i] != '0' && b[i] != '1')
            return (0);
        result = (result << 1) + (b[i] - '0');
        i++;
    }
    return (result);
}