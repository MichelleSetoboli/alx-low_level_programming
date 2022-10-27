#include "main.h"

/**
  * reverse_array - function that reverses the content
  * of an array of integers
  * @a: an array of integers
  * @n: the number of elements
  * Return: void
  */
void reverse_array(int *a, int n)
{
	int i;
	int j;

	i = 0;
	n = n - 1;

	while (i < n)
	{
		j = a[i];
		a[i] = a[n];
		a[n] = j;
		i++;
		n--;
	}
}


