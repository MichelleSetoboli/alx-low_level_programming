#include "lists.h"

/**
  * free_listint2 - a function that frees a listint_t list
  * @head: a pointer to the list
  * Return: void
  */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *current;

	if (head != NULL)
	{
		current = *head;
		while ((temp = current) != NULL)
		{
			current = current->next;
			free(temp);
		}
		*head = NULL;
	}
}
