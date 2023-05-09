#include "lists.h"

/**
 * check_cycle - checks if linked list has a cycle
 * @list: linked list being checked
 *
 * Return: 1 (list has a cycle), 0 (doesn't have)
 */
int check_cycle(listint_t *list)
{
	listint_t *f, *s = list;

	if (list == NULL)
	{
		return (0);
	}

	while (s && f && f->next)
	{
		s = s->next;
		f = f->next->next;
		if (f == s)
		{
			return (1);
		}
	}
	return (0);
}
