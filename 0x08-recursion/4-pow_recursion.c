#include "main.h"

/**
  * _pow_recursion - function that returns the value of
  * x raised to the power of y
  * @x: an integer
  * @y: an integer
  * Return: the value of x raised to the power of y
  */
int _pow_recursion(int x, int y)
{
	if (x == 0)
		return (0);
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));
}
