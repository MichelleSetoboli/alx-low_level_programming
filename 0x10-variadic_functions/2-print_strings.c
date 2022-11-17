#include "variadic_functions.h"

/**
  * print_strings - function that prints strings, followed by a new line
  * @separator: the string to be printed between the strings
  * @n: the number of strings passed to the function
  * Return: void
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char *);
		if (str)
			printf("%s", str);
		else
			printf("(nil)");
		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}
	printf("\n");

	va_end(ap);
}

