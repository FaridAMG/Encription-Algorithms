
cmake_minimum_required(VERSION 3.10)
project(RC4_Algorithm)


#<QT Extras>

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOMOC ON)

find_package(Qt5Widgets CONFIG
        PATHS /cmake/Qt5Widgets
        ) # NO DEF PATHS!!!

find_package(Qt5Network CONFIG
        PATHS /cmake/Qt5Network)


list(APPEND THIRD_PARTY_LIBS Qt5::Widgets Qt5::Core)



#</ QT Extras>


set(CMAKE_CXX_STANDARD 14)

add_executable(RC4_Algorithm main.cpp rc4.cpp rc4.h)

#<for the server>

set(THREADS_PREFER_PTHREAD_FLAG ON)
find_package(Threads REQUIRED)

#</ for the server>



#<More QT Extras>

target_link_libraries(${PROJECT_NAME}
        Qt5::Core
        Qt5::Widgets
        Qt5::Gui
        Qt5::Network
        Threads::Threads
        )


foreach(plugin ${Qt5Network_PLUGINS})
    get_target_property(_loc ${plugin} LOCATION)
    message("Plugin ${plugin} is at location ${_loc}")
endforeach()

#</ More QT Extras>