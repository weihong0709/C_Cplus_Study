# 查找当前目录下的所有源文件
# 并将名称保存到 DIR_LIB_SRCS 变量
aux_source_directory(. DIR_LIB_SRCS)

# 指定生成 arrayFunctions 链接库
add_library (arrayFunctions ${DIR_LIB_SRCS})
install (TARGETS arrayFunctions DESTINATION lib)
install (FILES array_test.h DESTINATION include)