#include "main.h"

/**
  * cap_string -  function that capitalizes all words of a string
  * @s: string
  *
  * Return: capitalizes letters
  */
char *cap_string(char *s)
{
	int i = 0;
	int j;

	char c[] = " \t\n,;.!?\"(){}";

	while (*(s + i))
	{
		if (*(s + i) >= 'a' && *(s + i) <= 'z')
		{
			if (i == 0)
				*(s + i) -= 'a' - 'A';
			else
			{
				for (j = 0; j <= 12; j++)
				{
					if (c[j] == *(s + i - 1))
						*(s + i) -= 'a' - 'A';
				}
			}
		}
		i++;
	}
	return (s);
}
