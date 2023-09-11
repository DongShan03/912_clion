# Collect source files in this directory
aux_source_directory(. VECTOR_SRC)

# Add the source files to the "Vector" library (if needed)
add_library(Vector ${VECTOR_SRC})

target_include_directories(Vector PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)