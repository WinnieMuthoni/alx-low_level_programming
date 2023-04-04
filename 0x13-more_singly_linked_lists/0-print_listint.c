#include "lists.h"

size_t print_listint(const listint_t *h)
{
	size_t single;
	single = 0;
	whle(h)
	{
		printf("%d\n", h->n);
		single++;
		h = h->next;
	}
	return (single);
}
