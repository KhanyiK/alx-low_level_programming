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
	va_list s
