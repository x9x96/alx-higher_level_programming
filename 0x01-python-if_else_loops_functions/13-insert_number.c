#include "lists.h"

/**
 * insert_node - puts a number in a sorted singly linked list
 * @head: pointer linked list head
 * @number: The number to insert.
 * Return: NULL(If function fails), pointer to new node
 */
listint_t *insert_node(listint_t **head, int number)
{
	listint_t *node = *head, *new;

	new = malloc(sizeof(listint_t));

	if (!new)
	{
		return (NULL);
	}

	new->n = number;

	if (node->n >= number || node == NULL)
	{
		new->next = node;
		*head = new;
		return (new);
	}

	while (node && node->next && node->next->n < number)
	{
		node = node->next;
	}

	new->next = node->next;
	node->next = new;

	return (new);
}
