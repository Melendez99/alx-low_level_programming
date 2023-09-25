#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a linked list
 * @head: pointer to the first node in the lists
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *newline;

	newline = malloc(sizeof(listint_t));
	if (!newline)
		return (NULL);

	newline->n = n;
	newline->next = *head;
	*head = newline;

	return (newline);
}
