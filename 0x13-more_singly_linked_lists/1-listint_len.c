#include "lists.h"

/**
  * listint_len - the number of elements in a linked list
  * @h: a pointer to the head of the linked list
  * Return: the number of elements in a linked listint_t list
  */
size_t listint_len(const listint_t *h)
{
	size_t nodes = 0;

	while (h)
	{
		h = h->next;
		nodes++;
	}
	return (nodes);
}
