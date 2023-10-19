#include "lists.h"

/**
 * free_list - free list
 * @head: pointer to node
 */

void free_list(list_t *head) 
{
	list_t *lsf

	while (head)
	{
		lsf = head->next;
		free(head->str);
		free(head);
		head = lsf;
	}
	
}
