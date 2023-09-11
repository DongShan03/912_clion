# Collect source files in this directory
aux_source_directory(. Queue_SRC)

# Add the source files to the "List" library (if needed)
add_library(Queue ${Queue_SRC})