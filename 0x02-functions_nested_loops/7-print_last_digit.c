#include "main.h"
/**
  * print_last_digit - a function that prints last digit of a number
  * @n: integer to extract last digit from
  *
  * Return: Returns last digit of the number n
  */
int print_last_digit(int n)
{
	int m;

	if (n < 0)
		m = -1 * (n % 10);
	else
		m = n % 10;
	_putchar((m % 10) + '0');
	return (m % 10);
}
