#include "lists.h"
/**
 * is_palindrome - prints all elements of listint_t list
 * @head: head pointer
 * Return: nodes
 */

int is_palindrome(listint_t **head)
{
	listint_t *temp = *head, *temp2 = *head;
	int x, y, len;
	int arr[];

	if (!head)
	{
		return (0);
	}
	if (!*head || ((*head)->next == NULL))
	{
		return (1);
	}
	for (len = 0; temp2->next != NULL; len++)
	{
		temp2 = temp2->next;
	}
	for (x = 0; x <= len; x++)
	{
		arr[x] = temp->n;
		temp = temp->next;
	}

	for (y = 0, len; y < len; y++, len--)
	{
		if (arr[y] != arr[len])
		{
			return (0);
		}
	}
	return (1);
}
