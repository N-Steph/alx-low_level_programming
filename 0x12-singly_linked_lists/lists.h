#ifndef LIST_H
#define LIST_H
int _putchar(char c);
/**
 * struct list_s - singly linked list
 * @str: string - (malloc'ed sting)
 * @len: length of the string
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 */
typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;
#endif /* LIST_H */
