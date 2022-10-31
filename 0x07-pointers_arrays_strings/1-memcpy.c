#include "main.h"

/**
  * _memcpy - function that copies memory area
  * @n: bytes to copy
  * @src: pointer to the object to copy from
  * @dest: pointer to the object to copy to
  * Return: a pointer to dest
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
