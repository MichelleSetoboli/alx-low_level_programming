#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
  * str_concat - function that concatenates two strings
  * @s1: string
  * @s2: string
  * Return: pointer should point to a newly allocated space in memory
  * or NULL on failure
  */
char *str_concat(char *s1, char *s2)
{
	unsigned int i = 0, j = 0;
	unsigned int len1 = 0, len2 = 0;
	char *str_copy;

	while (s1 && s1[len1])
		len1++;
	while (s2 && s2[len2])
		len2++;

	str_copy = malloc((len1 + len2) * sizeof(char) + 1);
	if (str_copy == NULL)
		return (NULL);

	if (s1)
	{
		while (i < len1)
	{
		str_copy[i] = s1[i];
		i++;
	}
	}
	if (s2)
	{
	while (i < (len1 + len2))
	{
		str_copy[i] = s2[j];
		i++;
		j++;
	}
	}
	str_copy[i] = '\0';
	return (str_copy);
}
