#include <stdlib.h>
#include <string.h>
#include "lists.h"


/**
* _strlen - finds the length of a string
* @str: string to find the length of
*
* Return: length of string
*/
unsigned int _strlen(char *str)
{
   unsigned int i;


   for (i = 0; str[i]; i++)
       ;
   return (i);
}


/**
* add_node_end - adds a new node to the end of linked list
* @head: double pointer to a linked list
* @str: string to add to the new node
*
* Return: pointer to the new node
*/
list_t *add_node_end(list_t **head, const char *str)
{
   list_t *new;
	list_t *temp = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}

