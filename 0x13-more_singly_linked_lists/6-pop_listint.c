#include "lists.h"

/**
 * pop_listint - Deletes the head node of a listint_t list.
 * @head: @head: double pointer to head node of linked list
 * Return: If the linked list is empty - 0.
 *         Otherwise - The head node's data (n).
 */
int pop_listint(listint_t **head)
{
	listint_t *hold;
	int num;

	if (*head == NULL)
		return (0);

	hold = *head;
	num = (*head)->n;
	*head = (*head)->next;

	free(hold);

	return (num);
}
