#include <stdio.h>
/**
  * main - prints all possible different combinations of three digits
  *
  * Return: 0 if success
**/
int main(void)
{

	int x, n1, n2, n3;

	for (x = 12; x < 1000; x++)
	{
		n1 = x / 100;
		n2 = (x / 10) % 10;
		n3 = x % 10;
		if (n3 > n2 && n2 > n1)
		{
			if (x > 12)
			{
				putchar (',');
				putchar (' ');
			}
			putchar (n1 + 48);
			putchar (n2 + 48);
			putchar (n3 + 48);
		}
	}
	putchar ('\n');
	return (0);
}
