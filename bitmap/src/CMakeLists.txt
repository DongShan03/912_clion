# Collect source files in this directory
aux_source_directory(. Bitmap_SRC)

# Add the source files to the "Fib" library (if needed)
add_library(Bitmap ${Bitmap_SRC})

# Add your main executable target
add_executable(912Bitmap main_o1_init.cpp)

# Link the main executable with the "Vector" library (if needed)
target_link_libraries(912Bitmap Bitmap)