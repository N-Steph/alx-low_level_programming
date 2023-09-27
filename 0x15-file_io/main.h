#ifndef MAIN_H
#define MAIN_H

#include <stddef.h>
#include <sys/types.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdlib.h>

int _puchar(char c);
ssize_t read_textfile(const char *filname, size_t letters);

#endif /* MAIN_H */
