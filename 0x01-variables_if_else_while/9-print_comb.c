#include <stdio.h>
/**
 * main - prints all possible combinations of single-digit numbers
 *
 * Return: 0
 **/
int main(void)
{
	int c;

	for (c = 48; c <= 57; c++)
	{
		if (c != 48)
		{
			putchar(',');
			putchar(' ');
		}
	putchar(c);
	}
	putchar('\n');

	return (0);
}
