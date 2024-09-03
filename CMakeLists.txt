cmake_minimum_required(VERSION 3.28)

project(tarea_patino)

file (GLOB binaries "ejemplos/*.cpp")

foreach(bin_f ${binaries})
    get_filename_component(ofwe ${bin_f} NAME_WE)
    add_executable(${ofwe} ${bin_f})
endforeach()
