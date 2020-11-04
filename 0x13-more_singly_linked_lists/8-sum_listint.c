#include "lists.h"
/**
  * sum_listint - sum all the data (n) of a list
  * @head: list coming
  * Return: sum of all the data (n) of a list
**/
int sum_listint(listint_t *head)
{
	int i;
	int sum;

	if (head == NULL)
		return (0);

	for (i = 0; head; i++)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
