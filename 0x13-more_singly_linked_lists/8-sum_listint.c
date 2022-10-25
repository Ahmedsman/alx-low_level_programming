#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - calculates sum of all data (n)
 * of a linked list
 * @head : pointer to head of the list
 * Return: sum of all the data (n), otherwise 
 */

int sum_listint(listint_t *head)
{
int add;

add = 0;

while (head)
{
add += head->n;
head = head->next;
}
return (add);
}
