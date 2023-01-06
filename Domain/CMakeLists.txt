project(Domain)

set(HEADER_FILES
        TemplateCppClass.h
        )

set(SOURCE_FILES
        TemplateCppClass.cpp
        )

add_library(Domain STATIC ${SOURCE_FILES} ${HEADER_FILES})