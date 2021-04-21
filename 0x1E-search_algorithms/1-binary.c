#include "search_algos.h"
/**
 * binary_search - Function that searches for a value in
 * an array of integers using the Linear search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: value to search for
 * Return: the first index where the value is located
 **/
int binary_search(int *array, size_t size, int value)
{
	int left = 0, right = size - 1, middle, i;

	if (array == NULL)
		return (-1);

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right - 1; i++)
		{
			printf("%d, ", array[i]);
		}
		printf("%d\n", array[i]);

		middle = (left + right) / 2;

		if (array[middle] == value)
			return (middle);
		else if (value < array[middle])
			right = middle - 1;
		else
			left = middle + 1;
	}
	return (-1);
}
