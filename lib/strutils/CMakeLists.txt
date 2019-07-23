set(STRUTILS_SOURCES
    src/strutils.cpp
)

add_library(strutils STATIC ${STRUTILS_SOURCES})
target_include_directories(strutils PUBLIC include)