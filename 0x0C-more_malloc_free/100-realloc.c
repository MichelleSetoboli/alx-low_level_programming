#include "main.h"
#include <stdlib.h>

/**
  * _realloc - function that reallocates a memory block using malloc and free
  * @ptr: a pointer to the memory previously allocated with a call to malloc
  * @old_size: the size, in bytes, of the allocated space for ptr
  * @new_size: the new size, in bytes of the new memory block
  * Return: pointer to the newly allocated memory or NULL
  */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *p;
	char *old_ptr;
	unsigned int i;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	if (!ptr)
		return (malloc(new_size));
	p = malloc(new_size);
	if (!p)
		return (NULL);
	old_ptr = ptr;

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
			p[i] = old_ptr[i];
	}
	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
			p[i] = old_ptr[i];
	}
	free(ptr);
	return (p);
}





