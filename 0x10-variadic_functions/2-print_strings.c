#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  * print_strings - function that prints strings
  * @separator: string
  * @n: string
  * @...: variable
  */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list z;
	char *str;
	unsigned int y;

	va_start(z, n);
	for (y = 0; y < n; y++)
	{
		str = va_arg(z, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (y != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(z);
}
