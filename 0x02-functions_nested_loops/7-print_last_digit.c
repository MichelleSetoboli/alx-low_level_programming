#include "main.h"
/**
  * print_last_digit - a function that prints last digit of a number
  * @n: integer to extract last digit from
  *
  * Return: Returns las digit of the number n
  */
int print_last_digit(int n)
{
	 int last_digit = n % 10;

	 _putchar('0' + last_digit);
	return (last_digit);
}
