#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: pointer to an unsigned long to change
 * @index: index to change to one
 * Return: 1 if it worked or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index > 63)
	{
		return (-1);
	}
    
	*n = (*n | (1ul << index));
		return (1);
}
