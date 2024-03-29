#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int _puchar(char c);
int _strlen(char *s);
ssize_t read_textfile(const char *filname, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
void error_closure(int fd);
void error_create_write(char *);
void error_exist_read(char *);

#endif /* MAIN_H */
