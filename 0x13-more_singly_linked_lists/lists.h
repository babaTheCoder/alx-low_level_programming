#ifndef LISTS_H
#define LISTS_H

/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed string)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */

typedef struct listint_s
{
    int n;
    struct listint_s *next;
} listint_t;

int _putchar(char c);


#endif
