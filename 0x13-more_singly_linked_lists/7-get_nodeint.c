#include "lists.h"

/**
  * get_nodeint_at_index - the nth node of a listint_t linked list
  * @head: a pointer of the first node
  * @index: index of the node
  * Return: the nth node of a listint_t linked list,
  * if the node does not exist, return NULL
  */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	for (i = 0; i < index && head != NULL; i++)
	{
		head = head->next;
	}
	return (head);
}
