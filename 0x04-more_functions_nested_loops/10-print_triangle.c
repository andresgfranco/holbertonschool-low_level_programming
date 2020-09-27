#include "holberton.h"
/**
  * print_triangle - prints a triangle
  * @size: the size of the triangle
  * Return: void
**/
void print_triangle(int size)
{
	int lines;
	int spaces;
	int spaceaux = size;
	int sharp;
	int sharpaux = 1;

	if (size <= 0)
		_putchar('\n');
	for (lines = 0; lines < size; lines++)
	{
		for (spaces = 1; spaces < spaceaux; spaces++)
		{
			_putchar(' ');
		}
		for (sharp = 1; sharp <= sharpaux; sharp++)
			_putchar('#');
		sharpaux++;
		spaceaux--;
		_putchar('\n');
	}
}
