#include "lists.h"

/**
 * Print_List - Print all element of a list
 *
 * Linked List
 *
 * Return: Number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodeCount = 0;

	while (head != NULL) 
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else 
		{
			printf("[%u] %s\n", head->len, head->str);
		}

		nodeCount++;
		head = head->next;
	} 

	return nodeCount;
}
