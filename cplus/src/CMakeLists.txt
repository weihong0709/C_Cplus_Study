# CMake 最低版本号要求
cmake_minimum_required (VERSION 2.8)
#CMAKE的内建变量，如果是true，就说明编译器的64位的，自然可以编译64bit的程序
if(CMAKE_CL_64)    
set(ADDRESS_MODEL 64)
set(NODE_TARGET x64)
else()
set(ADDRESS_MODEL 32)
set(NODE_TARGET x86)
endif()

set(CMAKE_BUILD_TYPE "Debug")

# 项目信息
project (demo)
#编译选项
add_compile_options(-std=c++11)
# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(./ DIR_SRCS)
#指定include包含文件查找路径
include_directories("./array/" "./string/" "./enum/" "./function/" "./class/" "./util" "./mystl")
# 添加子目录,子目录下必须有CMakeLists.txt文件
add_subdirectory(array)
add_subdirectory(string)
add_subdirectory(enum)
add_subdirectory(function)
add_subdirectory(class)
add_subdirectory(util)
add_subdirectory(mystl)

# 指定生成目标 
add_executable(demo ${DIR_SRCS})
# 添加链接库
target_link_libraries(demo arrayFunctions stringFunctions enumFunctions testFunctions classFunctions utilFunctions mystlFunctions)
install (TARGETS demo DESTINATION bin)

