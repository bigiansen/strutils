set(STRUTILS_TESTS_SOURCES
    src/main.cpp
    src/strutils_contains.cpp
    src/strutils_replace.cpp
    src/strutils_split.cpp
    src/strutils_toupper_tolower.cpp
    src/strutils_trim.cpp
)

add_executable(strutils_tests ${STRUTILS_TESTS_SOURCES})
target_link_libraries(strutils_tests strutils Catch2::Catch2)