cmake_minimum_required(VERSION 3.12)
project(raylibTemplate)

set(CMAKE_CXX_STANDARD 17)

# Get the source toegher
file(GLOB sources *.cpp)

# Get the source  of classes toegher
file(GLOB sources_clases clases/*.cpp)


include("cmake/raylib_web.cmake")
include("cmake/raylib.cmake")


add_executable(${PROJECT_NAME} ${sources} ${sources_clases} clases/Score_Strategy.h clases/Coin_Strategy.h clases/Coin_Strategy.cpp clases/BadCoin_Strategy.h clases/BadCoin_Strategy.cpp clases/Strategy_Context.h clases/Strategy_Context.cpp)
add_dependencies(${PROJECT_NAME} raylib)
target_link_libraries(${PROJECT_NAME} ${raylib_LDFLAGS})
target_include_directories(${PROJECT_NAME} PRIVATE ${raylib_INCLUDE_DIRS})

file(COPY "resources/"  DESTINATION "resources/")

include("cmake/raylib_web_post.cmake")