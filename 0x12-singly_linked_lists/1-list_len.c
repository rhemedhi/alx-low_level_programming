#include "lists.h"

/**
 * list-len - return number of elements in a linked list_t list.
 * @h: Pointer to linked list node.
 * Return: number j elements in linked list
 */
size_t list_len(const list_t *h)
{
size_t j = 0;

while (h != NULL)
{
j++;
h = h->next;
}
return (j);
}
