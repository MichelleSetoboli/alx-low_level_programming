#include "main.h"

/**
  * _strstr - function that locates a substring
  * @needle: substring
  * @haystack: string
  * Return: a pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0';)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (needle[j] != haystack[i + j])
			{
				break;
			}
		}
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;
	}
	return ('\0');
}


