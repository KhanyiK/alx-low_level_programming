#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
  * print_numbers - prints numbers
  * @separator: string
  * @n: integer
  * @...: variable
  */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list numbers;
	unsigned int x;

	va_start(numbers, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(numbers, int));
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(numbers);
}
