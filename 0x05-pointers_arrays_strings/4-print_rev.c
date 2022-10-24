#include "main.h"

/**
  * print_rev - function that prints a string, in reverse
  * @s: a string
  * Return: Always 0 (Success)
  */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != 0)
	{
		i++;
	}
	while (i > 0)
	{
		i--;
		_putchar(s[i]);
	}
		_putchar('\n');
}
