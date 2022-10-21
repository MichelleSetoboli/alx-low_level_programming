#include "main.h"
/**
  * print_diagonal -draws a diagonal line on the terminal
  * @n: the number of times that the special character must be print
  *
  * Return: a diagonal line
  */
void print_diagonal(int n)
{
	int m, c;

	if (n > 0)
	{
		for (m = 0 ; m < n ; m++)
		{
			for (c = 0 ; c < m ; c++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
