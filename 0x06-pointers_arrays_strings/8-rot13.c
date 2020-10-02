#include "holberton.h"
/**
  * rot13 - encodes a string using rot13
  * @s: string
  * Return: pointer to s
**/
char *rot13(char *s)
{
	int i, j;
	char regular[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; regular[j] != '\0'; j++)
		{
			if (s[i] == regular[j])
			{
				s[i] = rot[j];
				break;
			}
		}
		j = 0;
	}
	return (s);
}
