#include "lists.h"

/**
 * listint_len - find the number of elements in a linked `listint_t` list
 * @h: linked list head
 * Return: number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
	const listint_t *c;
	size_t nodes;

	for (c = h, nodes = 0; c != NULL; nodes++, c = c->next)
		;

	return (nodes);
}
