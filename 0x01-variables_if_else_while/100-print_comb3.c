#include <stdio.h>
/**
  * main - prints all possible different combinations of two digits
  *
  * Return: 0 if success
**/
int main(void)
{

	int x, n1, n2;

	for (x = 0; x < 100; x++)
	{
		n1 = x / 10;
		n2 = x % 10;
		if (n2 > n1)
		{
			if (x > 1)
			{
				putchar (',');
				putchar (' ');
			}
			putchar (n1 + 48);
			putchar (n2 + 48);
		}
	}
	putchar ('\n');
	return (0);
}
