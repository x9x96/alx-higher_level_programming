#ifndef LISTS_H
#define LISTS_H

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;

int is_palindrome(listint_t **head);
int palind_checker(listint_t **head, listint_t *end);
#endif /* LISTS_H */
