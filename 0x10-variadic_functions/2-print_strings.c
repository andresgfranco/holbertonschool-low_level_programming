#include "variadic_functions.h"
/**
  * print_strings - prints strings
  * @separator: string to be printed between the strings
  * @n: number of strings passed to the function
  * Return: void
**/
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list valist;
	char *string;

	if (separator == NULL)
		separator = "";

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		string = va_arg(valist, char *);
		if (string == NULL)
			string = "(nil)";
		if (i == (n - 1))
			printf("%s", string);
		else
			printf("%s%s", string, separator);
	}
	printf("\n");

	va_end(valist);
}
