#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
  * argstostr - function that concatenates all the arguments of a program
  * @ac: count of args
  * @av: pointer to array of args
  * Return: pointer to new array of all args or NULL if failure
  */
char *argstostr(int ac, char **av)
{
	int i, j, k, len;
	char *str, *s;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (i = 0; i < ac; i++)
	{
		s = av[i];
		j = 0;

		while (s[j++])
			len++;
		len++;
	}
	str = (char *)malloc(sizeof(char) * (len + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0, j = 0; i < ac && j < len; i++)
	{
		s = av[i];
		k = 0;

		while (s[k])
		{
			str[j] = s[k];
			k++;
			j++;
		}
		str[j++] = '\n';
	}
	str[j] = '\0';
	return (str);
}
