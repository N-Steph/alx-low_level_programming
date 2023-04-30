#ifndef LISTS_H
#define LISTS_H
int _putchar(char);
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structre
 *
 */
typedef struct listint_s
{
	int n;
	struct listint_s *next;
} listint_t;
#endif /* LISTS_H */
