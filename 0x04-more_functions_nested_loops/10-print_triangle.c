#include "main.h"
/**
  * print_triangle- function that  prints a triangle
  * @size: size of the triangle
  *
  * Return: a triangle
  */
void print_triangle(int size)
{
	int m, c;

	if (size > 0)
	{
		for (m = 0 ; m < size ; m++)
		{
			for (c = size ; c >= 1; c--)
			{
				if (m < c)

					_putchar(' ')
				else
					_putchar(35);
				}
			}
			_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
