# Collect source files in this directory
aux_source_directory(. GRAPH_SRC)

# Add the source files to the "Graph" library (if needed)
add_library(Graph ${GRAPH_SRC})