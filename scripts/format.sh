#!/bin/bash

# Find all .cpp, .h, and .c files in the `src` directory
 find src   \( -name '*.cpp'  -o -name '*.h' -o -name '*.c' \)  -print | while read file; do
    # Format the file in place
    clang-format -i "$file"
    echo "Formatted: $file"
done