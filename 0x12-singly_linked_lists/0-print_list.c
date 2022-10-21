#include "lists.h"
#include <stdio.h>
/**
 * print_list - prints all the elements of a linked list
 * @h: pointer to the list_t list to print
 *
 * Return: the number of nodes printed
 */
size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *c = h;

	while (c != NULL)
	{
		printf("[%d] %s\n", c->len,
		c->str != NULL ? c->str : "(nil)");
		c = c->next;
		nodes++;
	}

	return (nodes);

}
