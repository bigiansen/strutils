set(STRUTILS_TESTS_SOURCES
    src/main.cpp
    src/strutils.cpp
)

add_executable(strutils_tests ${STRUTILS_TESTS_SOURCES})
target_link_libraries(strutils_tests strutils Catch2::Catch2)