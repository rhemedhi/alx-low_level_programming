#include "lists.h"

/**
 * insert_nodeint_at_index - function entry
 * @head: ptr to list
 * @idx: position to insert node
 * @n: element to insert
 * Desc: a function that inserts a new node
 * at a given position
 * Return: addr of new node or NULL on fail
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;
	listint_t *cur = *head;
	unsigned int i = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (i < (idx - 1))
	{
		if (cur == NULL)
			return (NULL);
		cur = cur->next;
		i++;
	}
	new->next = cur->next;
	cur->next = new;

	return (new);
}
