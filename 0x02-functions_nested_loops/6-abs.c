#include "main.h"
/**
  * _abs - function that prints the absolute value of an integer
  * @c: integer input
  *
  * Return: Absolute value of c
  */
int _abs(int c)
{
	if (c >= 0)
		return (c);
	else
		return (c * -1);
}
