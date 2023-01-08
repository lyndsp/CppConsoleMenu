project(Domain)

set(HEADER_FILES
        Operation.h
        )

set(SOURCE_FILES
        Operation.cpp
        )

add_library(Domain STATIC ${SOURCE_FILES} ${HEADER_FILES})