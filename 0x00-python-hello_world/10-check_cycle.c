#include "lists.h"

/**
 * check_cycle - checks if linked list has a cycle
 * @list: linked list being checked
 *
 * Return: 1 (list has a cycle), 0 (doesn't have)
 */
int check_cycle(listint_t *list)
{
	listint_t *temp;

	if (!list)
		return (0);

	while (list)
	{
		temp = list;
		list = list->next;

		if (temp <= list)
			return (1);
	}
	return (0);
}
