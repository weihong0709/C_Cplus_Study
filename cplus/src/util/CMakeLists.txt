# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
aux_source_directory(. DIR_LIB_SRCS)

# 指定生成 arrayFunctions 链接库
add_library (utilFunctions ${DIR_LIB_SRCS})
#install (TARGETS utilFunctions DESTINATION lib)
#install (FILES time_test.h DESTINATION include)