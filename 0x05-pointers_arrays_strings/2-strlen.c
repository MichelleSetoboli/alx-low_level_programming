#include "main.h"

/**
  * _strlen - function that returns the length of a string
  * @s: string input
  *
  * Return: Always 0 (Success)
  */
int _strlen(char *s)
{
	int i = 0;

	for (; *s++;)
		i++;

	return (i);
}
