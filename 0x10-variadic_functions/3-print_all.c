#include "variadic_functions.h"
/**
  * print_all - prints anything
  * @format: list of tyoes of arguments passed to the function
  * Return: void
**/
void print_all(const char * const format, ...)
{
	va_list valist;
	int i = 0, j;
	char *separator = "";

	printargument printarg[] = {
		{"c", print_c},
		{"i", print_i},
		{"f", print_f},
		{"s", print_s}
	};

	va_start(valist, format);

	while (format != NULL && format[i] != '\0')
	{
		j = 0;
		while (j <= 3)
		{
			if (format[i] == printarg[j].typeargument[0])
			{
				printf("%s", separator);
				(printarg[j].func)(valist);
				separator = ", ";
			}
			j++;
		}
		i++;
	}

	va_end(valist);
	printf("\n");
}
/**
  * print_c - prints a character
  * @valist: is the va_list variable
  * Return: void
**/
void print_c(va_list valist)
{
		printf("%c", va_arg(valist, int));
}

/**
  * print_i - prints a int
  * @valist: is the va_list variable
  * Return: void
 **/
void print_i(va_list valist)
{
	printf("%d", va_arg(valist, int));
}

/**
 * print_f - prints a float
 * @valist: is the va_list variable
 * Return: void
 **/
void print_f(va_list valist)
{
	printf("%f", va_arg(valist, double));
}

/**
 * print_s - prints a string
 * @valist: is the va_list variable
 * Return: void
**/
void print_s(va_list valist)
{
	char *va = va_arg(valist, char *);

	if (va == NULL)
		va = "(nil)";
	printf("%s", va);
}
