cmake_minimum_required (VERSION 3.8)
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED TRUE)



project ("BadAttitude")

add_executable (BadAttitude "src/main.cpp")
add_library (Event SHARED "src/event/event.cpp" "src/event/event.h")
add_library (Client SHARED "src/client/client.cpp" "src/client/client.h")
add_library (Server SHARED "src/server/server.cpp" "src/server/server.h")
add_library (Block SHARED "src/block/block.cpp" "src/block/block.h")
add_library (World SHARED "src/world/world.cpp" "src/world/world.h")
if(MSVC)
add_compile_options(/experimental:module)
find_package(SDL2 CONFIG REQUIRED)
find_package(sdl2-ttf CONFIG REQUIRED)
find_package(sdl2-image CONFIG REQUIRED)
target_link_libraries(BadAttitude SDL2::SDL2main SDL2::SDL2 SDL2::SDL2_ttf SDL2::SDL2_image)
target_link_libraries(Block SDL2::SDL2main SDL2::SDL2 SDL2::SDL2_ttf SDL2::SDL2_image)
endif()

target_link_libraries(BadAttitude Event)
target_link_libraries(BadAttitude Client)
target_link_libraries(BadAttitude Server)
target_link_libraries(BadAttitude Block)
target_link_libraries(BadAttitude World)

set(RESOURCE_FILES res)
file(COPY ${RESOURCE_FILES} DESTINATION ${CMAKE_CURRENT_BINARY_DIR})