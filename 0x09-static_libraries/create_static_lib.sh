#!/bin/bash

# Name of the static library
LIB_NAME="liball.a"

# Compiling the .c files in the directory into .o files
for file in *.c; do
	gcc -c -Wall -Werror -Wextra -pedantic -std=gnu89 "$file"
done

# Creating the static library from the compiled object files
ar rcs "$LIB_NAME" *.o
