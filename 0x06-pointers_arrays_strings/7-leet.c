#include "holberton.h"
/**
  * leet - encodes a string into 1337
  * @s: string
  * Return: pointer to s
**/
char *leet(char *s)
{
	int i, j;
	char regular[] = "AaeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; regular[j] != '\0'; j++)
		{
			if (s[i] == regular[j])
			{
				s[i] = leet[j];
				break;
			}
		}
		j = 0;
	}
	return (s);
}
