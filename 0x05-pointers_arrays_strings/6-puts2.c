#include "holberton.h"
/**
  * puts2 - prints every other character of a string, starting with the first
  * @str: string coming
  * Return: void
**/
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
		i++;
		if (str[i] == '\0')
			break;
	}
	_putchar('\n');
}
