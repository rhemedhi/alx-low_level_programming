#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in the new node created
 * Return: pointer to the new node, or NULL if it fails
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *f;

	f = malloc(sizeof(listint_t));

	if (!f)
		return (NULL);

	f->n = n;
	f->next = *head;
	*head = f;

	return (*head);
}
