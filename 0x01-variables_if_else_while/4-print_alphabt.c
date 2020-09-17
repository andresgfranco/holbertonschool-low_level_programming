#include <stdio.h>
/**
 * main - prints the alphabet in lowercase except q and e
 *
 * Return: 0
**/
int main(void)
{
	int c;

	for (c = 97; c <= 122; c++)
	{
		if (c == 101 || c == 113)
		{
			c++;
		}
		putchar (c);
	}
	putchar('\n');
	return (0);
}
