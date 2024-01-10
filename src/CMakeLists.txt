add_executable(${PROJECT_NAME} main.cpp)

SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall")

FILE(GLOB ProblemSource library/*.cpp)
add_library(assignment_functions STATIC ${ProblemSource})

target_link_libraries(${PROJECT_NAME} assignment_functions)

add_test(
        NAME
        main
        COMMAND
        ${CMAKE_RUNTIME_OUTPUT_DIRECTORY}/${PROJECT_NAME}
)