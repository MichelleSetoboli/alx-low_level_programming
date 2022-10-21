#include "main.h"

/**
  * print_triangle - function that prints triangle
  *  @size: size of the triangle
  *
  */
void print_triangle(int size)
{
	int m, c;

	if (size > 0)
	{
		for (m = 1; m <= size; m++)
		{
			for (c = size ; c >= 1; c--)
			{
				if (m < c)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
		_putchar('\n');
}
