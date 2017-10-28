cmake_minimum_required(VERSION 3.0)
project(CCK_cdh_import)

add_library(CCK_cdh_import SHARED plugin.cpp)

target_link_libraries(CCK_cdh_import CCK_plugin_base)