#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include "lists.h"

/**
 * insert_node - inserts node in a sorted singly linked list
 * @head: the head node of the list
 * @number: the identity of specified node
 * Return: Address of new node, else NULL
 **/

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *current = *head;
	listint_t *new_node = malloc(sizeof(listint_t));
	listint_t *previous = NULL;

	if (!new_node)
	{
		return (NULL);
	}
	new_node->n = number;
	new_node->next = NULL;
	if (!*head)
	{
		*head = new_node;
	}

	while (current && current->n < number)
	{
		previous = current;
		current = current->next;
	}
	if (!previous)
	{
		new_node->next = *head;
		*head = new_node;
	}
	else if (current)
	{
		previous->next = new_node;
		new_node->next = current;
	}
	else
	{
		previous->next = new_node;
	}
	return (new_node);
}
