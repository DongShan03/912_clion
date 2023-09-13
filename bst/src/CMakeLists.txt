# Collect source files in this directory
aux_source_directory(. Bst_SRC)

# Add the source files to the "List" library (if needed)
add_library(Bst ${Bst_SRC})