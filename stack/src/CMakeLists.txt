# Collect source files in this directory
aux_source_directory(. Stack_SRC)

# Add the source files to the "List" library (if needed)
add_library(Stack ${Stack_SRC})