#include "lists.h"

/**
 * _strlen - finding the lenght of a string.
 * @s: first pointer
 * Return: it returns the length of the string.
 */
int _strlen(char *s)
{
	int str = 0;

	while (s[str] != '\0')
	{
		str++;
	}
	return (str);
}

/**
  * add_node_end - adds a new node at the end of a list_t list
  * @head: pointer to the address of head
  * @str: pointer to the string of each new node
  * Return: the address of the new element, or NULL if it failed
  */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new;
	list_t *last;

	if (!head)
		return (0);
	last = *head;
	new = malloc(sizeof(list_t));
	if (!new)
		return (0);
	new->str = strdup(str);
	new->len = _strlen((char *)str);
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (last->next)
		last = last->next;
	last->next = new;
	return (*head);
}
