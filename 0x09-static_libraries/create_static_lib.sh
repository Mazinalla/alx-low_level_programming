#!/bin/bash
# This script creates a static library called liball.a from all the .c files in the current directory

# Compile all .c files into .o files
gcc -c *.c

# Create the static library liball.a from the .o files
ar rcs liball.a *.o

# Clean up the .o files (optional)
rm *.o
