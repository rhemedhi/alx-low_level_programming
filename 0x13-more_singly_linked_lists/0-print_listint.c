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

	while(h)
	{
		printf("%d\n", h->n)
		cnt++;
		h = h->next;
	}

	return (cnt);
}
