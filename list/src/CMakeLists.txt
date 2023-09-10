# Collect source files in this directory
aux_source_directory(. LIST_SRC)

# Add the source files to the "List" library (if needed)
add_library(List ${LIST_SRC})