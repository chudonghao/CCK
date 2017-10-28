
cmake_minimum_required(VERSION 3.0)
project(CCK)

set(CCK_root ${CMAKE_CURRENT_BINARY_DIR})
set(CCK_include_dir ${CCK_root}/src)
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -DBOOST_LOG_DYN_LINK -DDEBUG")
set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -DBOOST_LOG_DYN_LINK")


add_library(CCK_plugin_base SHARED
        src/plugin_base.h
        src/keyworld_context.cpp
        src/keyworld_context.h)

add_executable(CCK
        src/cck.cpp
        src/plugins_manager.cpp
        src/plugins_manager.h
        src/common.cpp
        src/common.h
        src/plugins_manager.cpp
        src/plugins_manager.h
        src/libs.h
        src/libs.cpp)

target_link_libraries(CCK
        boost_log_setup
        boost_log
        boost_program_options
        boost_system
        boost_filesystem
        boost_thread
        pthread
        )