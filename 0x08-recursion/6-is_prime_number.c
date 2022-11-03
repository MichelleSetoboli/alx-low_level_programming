#include "main.h"

/**
  * check - checks to see if number is prime
  * @a: an integer
  * @b: an integer
  * Return: an integer
  */
int check(int a, int b)
{
	if (b < 2 || b % a == 0)
		return (0);
	else if (a > b / 2)
		return (1);
	else
		return (check(a + 1, b));
}

/**
  * is_prime_number - function that shows if is a prime number
  * @n: a number
  * Return: integer
  */
int is_prime_number(int n)
{
	if (n == 2)
		return (1);
	return (check(2, n));
}
