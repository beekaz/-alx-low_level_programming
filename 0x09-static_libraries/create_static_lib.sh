#!/bin/bash

# Collect all .c files in the current directory
C_FILES=$(ls *.c)

# Compile the .c files and generate corresponding .o files
for file in $C_FILES; do
    gcc -c $file
done

# Create the static library using ar
ar rcs liball.a *.o

# Clean up by removing the .o files
rm *.o

echo "Static library liball.a created successfully"
