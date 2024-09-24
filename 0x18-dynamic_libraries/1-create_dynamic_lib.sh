#!/bin/bash
# Compiling all .c files into object files
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -fPIC -c *.c

# Creating dynamic library liball.so
gcc -shared -o liball.so *.o
