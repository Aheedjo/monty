#include "monty.h"
/**
* f_pop - deletes last entry
* @head: stack head
* @counter: line_number
* Return: Always 0
*/
void f_pop(stack_t **head, unsigned int counter)
{
    stack_t *h;

    if (*head == NULL)
    {
        fprint(stderr, "L%d: can't pop an empty stack\n", counter);
        fclose(bus.file);
        free(bus.content);
        free_stack(*head);
        exit(EXIT_FAILURE);
    }
    h = *head;
    *head = h->next;
    free(h);
}
