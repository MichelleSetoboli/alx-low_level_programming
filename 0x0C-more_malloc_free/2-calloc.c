#include "main.h"
#include <stdlib.h>

/**
  * _calloc - unction that allocates memory for an array, using malloc
  * @size: size of bytes
  * @nmemb: number of elements
  * Return: a pointer to the allocated memory
  */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *c;
	unsigned int b;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (b = 0; b < (nmemb * size); b++)
		c[b] = 0;
	return (c);
}
