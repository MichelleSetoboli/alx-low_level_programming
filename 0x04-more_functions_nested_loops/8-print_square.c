#include "main.h"
/**
  * print_square - prints a square
  * @size: size of the square
  *
  * Return: a square
  */
void print_square(int size)
{
	int m, c;

	if (size > 0)
	{
		for (m = 0 ; m < size ; m++)
		{
			for (c = 0 ; c < size ; c++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
		else
		{
			_putchar('\n');
		}
}
