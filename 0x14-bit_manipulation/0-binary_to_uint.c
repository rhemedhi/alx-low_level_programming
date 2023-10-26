#include "main.h"

/**
 * btoui - Converts a binary string to an unsigned integer
 * @b: Pointer to a string of binary
 * Return: The converted number or 0 if:
 *    - Invalid characters in the string
 *    - NULL input
 */

unsigned int btoui(const char *b)
{
    unsigned int n = 0;

    if (b == NULL)
    {
        return 0;
    }

    for (int i = 0; b[i] != '\0'; i++)
    {
        if (b[i] == '0' || b[i] == '1')
        {
            n = (n << 1) + (b[i] - '0');
        }
        else
        {
            return (0);
        }
    }

    return (n);
}
