#!/bin/bash

# Get all the .c files in the current directory
c_files=$(ls *.c)

# Comile each .c file into an object file
for file in $c_files; do
	gcc - c "$file"
done

# Create the static library using ar command
ar rcs liball.a *.o

# Clean up the object files
rm *.o

echo "Static library liball.a created successfully."
