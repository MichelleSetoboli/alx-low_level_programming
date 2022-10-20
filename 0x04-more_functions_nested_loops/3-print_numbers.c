#include "main.h"

/**
  * print_numbers - prints the numbers from 0 to 9
  *
  * Return: numbers
  */
void print_numbers(void)
{
	char c = 0;

	for (c = 48 ; c <= 57 ; c++)
		_putchar(c);
	_putchar('\n');
}
