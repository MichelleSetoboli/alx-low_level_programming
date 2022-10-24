#include "main.h"

/**
  * swap_int -  function that swaps the values of two integers
  * @a: an integer
  * @b: an integer
  *
  * Return: Always 0 (Success)
  */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
