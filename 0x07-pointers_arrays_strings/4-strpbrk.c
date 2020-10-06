#include "holberton.h"
/**
  * _strpbrk - seaches a string for any of a set of bytes
  * @s: string entering
  * @accept: string of reference
  * Return: pointer to s or NULL if no such byte is found
**/
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
		}
		if (s[i] == accept[j])
			break;
	}
	if (s[i] == '\0')
		return (NULL);
	if (s[i] == accept[j])
	{
		return (&s[i]);
	}
	return (NULL);
}
