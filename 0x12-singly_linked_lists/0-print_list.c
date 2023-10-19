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
	const list_t *currentNode = head;
	size_t nodeCount = 0;

	while (currentNode != NULL) {
		if(currentNode->str != NULL)
			printf("[%d] %s\n", currentNode->len, currentNode->str);
		else
			printf("[0] (nil)\n");

		nodeCount += 1;
		currentNode = currentNode->next;
	}
	
	return nodeCount;
}
