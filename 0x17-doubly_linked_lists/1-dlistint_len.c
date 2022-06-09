#include "lists.h"
/**
 * dlistint_len - function that returns the number or elements in a
 * linked list
 * @h: the linked list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t node = 0;

	if (!h)
		return (0);

	while (h)
	{
		nodes++;
		h = h->next;
	}

	return (nodes);
}
