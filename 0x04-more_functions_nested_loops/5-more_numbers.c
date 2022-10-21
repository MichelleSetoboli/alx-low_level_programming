#include "main.h"
/**
  * more_numbers - function that  prints 10 times the numbers
  *
  * Return : numbers
  */
void more_numbers(void)
{
	int m, c;

	for (m = 0 ; m <= 9 ; m++)
	{
		for (c = 0 ; c <= 14 ; c++)
		{
			if (c >= 10)
			{
				_putchar(c / 10 + '0');
			}
			_putchar(c % 10 + '0');
		}
		_putchar('\n');
	}
}
