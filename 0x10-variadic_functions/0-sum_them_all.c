#include <stdarg.h>
#include "variadic_functions.h"
/**
  * sum_them_all - returns sum of all arameters
  * @n: parameter
  * @...: parameter
  * Return: if n == 0 - 0
  */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int y, sum = 0;

	va_start(ap, n);

	for (y = 0; y < n; y++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
