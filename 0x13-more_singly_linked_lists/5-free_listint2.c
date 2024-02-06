#include "lists.h"

/**
 * free_listint2 - a function that frees the list and sets head to NULL
 *
 * @head: pointer to the first node
 *
 * Return: nothing
*/
void free_listint2(listint_t **head)
{
	listint_t *current, *temp;

	if (head != NULL)
	{
		/*set head addr to current*/
		current = *head;
		/*Traverse through the whole list*/
		/*while setting the node to temp*/
	while ((temp = current) != NULL)
	{
		/*set next node to current*/
		current = current->next;
		/*free temp, that is the current node*/
		free(temp);
	}
	*head = NULL;
}
