# Collect source files in this directory
aux_source_directory(. BINTREE_SRC)

# Add the source files to the "Vector" library (if needed)
add_library(Bintree ${BINTREE_SRC})

target_include_directories(Bintree PUBLIC ${CMAKE_CURRENT_SOURCE_DIR}/../include)