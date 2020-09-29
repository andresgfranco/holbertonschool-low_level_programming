#include "holberton.h"
/**
  * _strlen - returns the lenght of a string
  * @s: string coming
  * Return: lenght of a string
**/
int _strlen(char *s)
{
	int i, l;

	for (i = 0; s[i] != '\0'; i++)
	{
		l++;
	}
	return (l);

}
