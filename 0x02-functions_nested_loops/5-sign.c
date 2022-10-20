#include "main.h"
/**
  * print_sign - function that prints the sign of a number
  * @n: number
  * Return: Returns 1 and prints + if n is greater than zero
  * Returns 0 and prints 0 if n is zero
  * Returns -1 and prints - if n is less than zero
  */
int print_sign(int n)
{
	int output;

	if (n > 0)
	{
		output = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		output = 0;
		_putchar('0');
	}
	else
	{
		output = -1;
		_putchar('-');
	}
	return (output);
}
