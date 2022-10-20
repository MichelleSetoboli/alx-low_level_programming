#include "main.h"
/**
  * _isdigit - funtion that checks for a digit (0 through 9)
  * @c: character to check
  * Return: Returns 1 if c is a digit otherwise a 0
  */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	return (0);
}

