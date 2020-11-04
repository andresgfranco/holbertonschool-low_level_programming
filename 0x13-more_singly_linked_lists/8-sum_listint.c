#include "lists.h"
/**
  * sum_listint - sum all the data (n) of a list
  * @head: list coming
  * Return: sum of all the data (n) of a list
**/
int sum_listint(listint_t *head)
{
	int sum;

	if (head == NULL)
		return (0);

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
