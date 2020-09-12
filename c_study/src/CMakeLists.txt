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
add_compile_options(-std=c99)
# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_SRCS 变量
aux_source_directory(./ DIR_SRCS)
#指定include包含文件查找路径

# 添加子目录,子目录下必须有CMakeLists.txt文件



# 指定生成目标 
add_executable(demo ${DIR_SRCS})
# 添加链接库

install (TARGETS demo DESTINATION bin)

