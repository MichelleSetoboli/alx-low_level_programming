#include "main.h"

/**
  * rot13 - encodes a string into rot13
  * @s: string
  *  Return: encode string
  */
char *rot13(char *s)
{
	int i;
	int j;

	char a[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char b[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; *(s + i); i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (a[j] == *(s + i))
			{
				*(s + i) = b[j];
				break;
			}

		}
	}
	return (s);
}
