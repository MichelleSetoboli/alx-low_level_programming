#include "main.h"
#include <stdlib.h>

/**
  * array_range - function that creates an array of integers
  * @min: integer
  * @max: integer
  * Return: the pointer to the newly created array
  */
int *array_range(int min, int max)
{
	int *a;
	int b, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;

	a = malloc(sizeof(int) * size);
	if (a == NULL)
		return (NULL);
	for (b = 0; min <= max; b++)
		a[b] = min++;
	return (a);
}
