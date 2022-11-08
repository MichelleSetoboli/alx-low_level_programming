#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * _strdup - function returns a pointer to a new string
  * which is a duplicate of the string str
  * @str: string to copy
  * Return: a pointer to the duplicated string, NULL if str = NULL
  * NULL if insufficient memory was available
  */
char *_strdup(char *str)
{
	unsigned int len;
	unsigned int i = 0, j = 0;
	char *str_copy;
	char *tmp = str;

	if (str == NULL)
		return (NULL);


	while (*str++)
		i++;
	len = i;
	str = tmp;

	str_copy = malloc(len * sizeof(char) + 1);
	if (str_copy == NULL)
	return (NULL);

	while (j < len)
	{
		str_copy[j] = str[j];
		j++;
	}
	str_copy[j] = '\0';
	return (str_copy);
}


