# Collect source files in this directory
aux_source_directory(. HUFFMAN_SRC)

# Add the source files to the "Vector" library (if needed)
add_library(Huffman ${HUFFMAN_SRC})

target_include_directories(Huffman PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)