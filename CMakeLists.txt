cmake_minimum_required(VERSION 3.13)
project(hogl_lib)


add_custom_target(hogl_lib
        COMMAND make
        WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
        )