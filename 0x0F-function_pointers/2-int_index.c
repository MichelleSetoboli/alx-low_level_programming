#include "function_pointers.h"

/**
  * int_index - function that searches for an integer
  * @array: array
  * @size: the number of elements in the array
  * @cmp: a pointer to the function to be used to compare values
  * Return: int_index returns the index of the first element
  * cmp function does not return 0
  * if no element matches, return -1, size <= 0, return -1
  */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size  <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
