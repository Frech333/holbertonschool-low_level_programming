#!/bin/bash

# Compile each .c file into corresponding .o file
for file in *.c; do
  gcc -c "$file"
done

# Create the static library
ar rcs liball.a *.o

# Clean up the generated object files
rm *.o
