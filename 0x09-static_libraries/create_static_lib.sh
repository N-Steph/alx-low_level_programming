#!/bin/bash
gcc -c -Wall -Werror -Wextra -std=gnu89 *.c ; ar -rc liball.a *.o 
