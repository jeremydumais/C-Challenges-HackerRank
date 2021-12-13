project("HelloWorld" LANGUAGES C)

add_executable(HelloWorld main.c)

if ("${CMAKE_C_COMPILER_ID}" STREQUAL "GNU") #gcc
  # https://gcc.gnu.org/onlinedocs/gcc/Warning-Options.html
  target_compile_options(${PROJECT_NAME}
    PRIVATE "-Wfatal-errors" # stops on first error
    "-Wall" # enables all the warnings about constructions
    "-Wextra" # Print extra warning messages"
    "-pedantic" # Issue all the warnings demanded by strict ISO C and ISO C++
    "-Wshadow" # Warn the user if a variable declaration shadows one from a parent context
    "-Wcast-align" # Warn for potential performance problem casts
    "-Wunused" # warn on anything being unused
    "-Wpedantic" # (all versions of GCC, Clang >= 3.2) warn if non-standard C++ is used
    "-Wconversion" # warn on type conversions that may lose data
    "-Wsign-conversion" # (Clang all versions, GCC >= 4.3) warn on sign conversions
    "-Wmisleading-indentation" # (only in GCC >= 6.0) warn if indentation implies blocks where blocks do not exist
    "-Wduplicated-cond" # (only in GCC >= 6.0) warn if if / else chain has duplicated conditions
    "-Wduplicated-branches" # (only in GCC >= 7.0) warn if if / else branches have duplicated code
    "-Wlogical-op" # (only in GCC) warn about logical operations being used where bitwise were probably wanted
    "-Wnull-dereference" # (only in GCC >= 6.0) warn if a null dereference is detected
    "-Wdouble-promotion" # (GCC >= 4.6, Clang >= 3.8) warn if float is implicit promoted to double
    "-Wformat=2" # warn on security issues around functions that format output (ie printf)
    )
endif()