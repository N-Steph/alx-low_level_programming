#ifndef MAIN_H
#define MAIN_H
int _putchar(char c);
unsigned int binary_to_uint(const char *b);
void print_binary(unsigned long int n);
unsigned int num_significant_bit(unsigned long int);
void reverse_bit_sequence(unsigned long int *bit_ptr);
int get_bit(unsigned long int n, unsigned int index);
#endif /* MAIN_H */