# 输出路径
BUILD_DIR = build
# 相关工具路径
MAKE = make
GCC  = gcc
ifeq ($(LANG),)
	# Windows
	MKDIR  = mkdir
	RM     = rd /s
	TARGET = $(BUILD_DIR)/mkdirs.exe
else
	# Liunx
    MKDIR  = mkdir -p
    RM     = rm -r
    TARGET = $(BUILD_DIR)/mkdirs
endif

# 帮助信息
help:
	@echo The following are some of the valid targets for this Makefile:
	@echo ... build (build project)
	@echo ... clean (remove build directory)

# 设置伪目标为 help
.PHONY: help

# 编译构建相关源码
build: output $(TARGET)

# 创建输出文件夹
output:
	$(MKDIR) $(BUILD_DIR)
# 链接
$(TARGET): $(BUILD_DIR)/mkdirs.o
	$(GCC) $(BUILD_DIR)/mkdirs.o -o $(TARGET)
# 编译
$(BUILD_DIR)/mkdirs.o: src/mkdirs.c
	$(GCC) -c src/mkdirs.c -o $(BUILD_DIR)/mkdirs.o
# 清除所有的编译构建的文件
clean:
	$(RM) $(BUILD_DIR)
