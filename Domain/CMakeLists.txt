project(Domain)

set(HEADER_FILES
        MenuController.h
        Operation.h
        )

set(SOURCE_FILES
        MenuController.cpp
        Operation.cpp
        )

add_library(Domain STATIC ${SOURCE_FILES} ${HEADER_FILES})