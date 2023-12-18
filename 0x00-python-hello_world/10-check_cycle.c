#include "lists.h"

/**
 * check_cycle - function that checks a singly linked list has a cycle in it
 * @list: a pointer to the struct listint_t
 * Return: 0 if there is no cycle, 1 if there is a cycle
 */

int check_cycle(listint_t *list)
{
	listint_t *next = list, *after = list;

	if (!list)
		return (0);
	while (next && after && after->next)
	{
		next = next->next;
		after  = after->next->next;
		if (next == after)
		{
			return (1);
		}
	}
	return (0);
}
