#include "lists.h"

/**
 * print_listint - Prints all elements of a linked list
 * @h: head of the list
 *
 * Return: the number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t cnt = 0;
	
	for(const listint_t *mov = h; mov != NULL; mov = mov->next)
	{
		printf("%d\n", mov->n)
		cnt++;
	}

	return cnt;
}
