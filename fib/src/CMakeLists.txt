# Collect source files in this directory
aux_source_directory(. FIB_SRC)

# Add the source files to the "Fib" library (if needed)
add_library(Fib ${FIB_SRC})

# Add your main executable target
add_executable(912Fib main.cpp)

# Link the main executable with the "Vector" library (if needed)
target_link_libraries(912Fib Fib)