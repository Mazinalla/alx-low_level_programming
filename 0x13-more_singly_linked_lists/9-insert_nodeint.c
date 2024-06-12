#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * create_node - Creates a new node
 * @n: Value to be added to the new node
 *
 * Return: Pointer to the new node, or NULL if it failed
 */
listint_t *create_node(int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	return (new_node);
}

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: Double pointer to the head of the list
 * @idx: Index where the new node should be added (starts at 0)
 * @n: Value to be added to the new node
 *
 * Return: Address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *current;
	unsigned int i;

	if (head == NULL)
		return (NULL);

	new_node = create_node(n);
	if (new_node == NULL)
		return (NULL);

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	current = *head;
	for (i = 0; current != NULL && i < idx - 1; i++)
	{
		current = current->next;
	}

	if (current == NULL)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}

/**
 * print_list - Prints all elements of a listint_t list
 * @head: Pointer to the head of the list
 *
 * Description: This function is for testing purposes
 */
void print_list(const listint_t *head)
{
	while (head != NULL)
	{
		printf("%d -> ", head->n);
		head = head->next;
	}
	printf("NULL\n");
}

/**
 * free_list - Frees a listint_t list
 * @head: Pointer to the head of the list
 *
 * Description: This function is for testing purposes
 */
void free_list(listint_t *head)
{
	listint_t *temp;

	while (head != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
