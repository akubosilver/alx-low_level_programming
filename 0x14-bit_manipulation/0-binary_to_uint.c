#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - check the code
 * @b: parameter
 *
 * Return: result or 0.
 */

unsigned int binary_to_uint(const char *b) 
{
    if (b == NULL)
        return 0;

    unsigned int result = 0;
    int i = 0;

    while (b[i] != '\0') 
    {
        if (b[i] != '0' && b[i] != '1')
            return 0; // Invalid character found, return 0
        
        result = (result << 1) + (b[i] - '0'); // Convert and add the bit
        i++;
    }

    return result;
}