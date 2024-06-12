#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * reverse_listint - Reverses a listint_t linked list
 * @head: Double pointer to the head of the list
 *
 * Return: Pointer to the first node of the reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next;

	while (*head != NULL)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;
	return (*head);
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
