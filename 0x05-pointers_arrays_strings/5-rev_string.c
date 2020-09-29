#include "holberton.h"
/**
  * rev_string - reverse a string
  * @s: string coming
  * Return: void
**/
void rev_string(char *s)
{
	    int l;
	    int i;
	    char b, e;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	l--;
	for (i = 0; i <= l; i++)
	{
		b = s[i];
		e = s[l];

		s[i] = b;
		s[l] = e;
		l--;
	}
}
