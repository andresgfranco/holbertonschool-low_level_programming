#include "holberton.h"
/**
  * string_toupper - changes all lowercase letters of a string to uppercase
  * @s: string
  * Return: pointer to string s
**/
char *string_toupper(char *s)
{
	int i, j;
	char low[] = "abcdefghijklmnopqrstuvwxyz";
	char upper[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; low[j] != '\0'; j++)
		{
			if (s[i] == low[j])
			{
				s[i] = upper[j];
			}
		}
		j = 0;
	}
	return (s);
}
