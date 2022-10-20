#include "main.h"
/**
  * print_most_numbers - prints numbers between 0 and 9 excluding 2 and 4
  *
  * Return: numbers
  */
void print_most_numbers(void)
{
	char c = 0;

	for (c = 48 ; c <= 57 ; c++)
	{
		if (c != 50 && c != 52)
		{
			_putchar(c);
		}
	}
	_putchar('\n');
}
