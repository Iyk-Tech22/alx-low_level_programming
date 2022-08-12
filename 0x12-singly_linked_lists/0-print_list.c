#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all the elements in the list
 * @head: list data
 * Return: numbers of nodes in the list
 */
size_t print_list(const list_t *head)
{
	size_t i;

	i = 0;
	while (head)
	{
		if (head->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%u] (%s)\n", head->len, head->str);
		head = head->next;
		++i;
	}
	return (i);
}
