#include <stdlib.h>
#include "lists.h"

/**
 * dlistint_len - Counts the number of elements in a doubly linked list
 * @h: The double linked list to count
 *
 * Return: Number of elements in the doubly linked list
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t len = 0;

	for ( ; h; h = h->next)
		++len;

	return (len);
}
