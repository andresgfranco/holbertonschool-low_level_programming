#include "variadic_functions.h"
/**
  * print_numbers - prints numbers, followed by a new line
  * @separator: , and whitespace
  * @n: number of integers passed to the function
  * Return: void
**/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;

	if (n == 0)
		return;
	if (separator == NULL)
		separator = "";

	va_start(valist, n);
	
	for (i = 0; i < n; i++)
	{
		if (i == (n - 1))
			printf("%d", va_arg(valist, int));
		else
			printf("%d%s", va_arg(valist, int), separator);
	}
	printf("\n");

	va_end(valist);
}
