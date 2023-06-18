#!/bin/bash

# Comile each .c file into an object file
for file in *.c; do
	if gcc -c "$file"; then
		echo "Compilation successful: $file"
	else
		echo "Compilation failed: $file"
		exit 1 
	fi 
done

# Create the static library using ar command
ar rcs liball.a *.o

# Clean up the object files
rm *.o

echo "Static library liball.a created successfully."
