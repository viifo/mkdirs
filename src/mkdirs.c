#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WINDOWS 1
#define LINUX 2

// Windows
#if defined(WIN32) || defined (WIN64)
#define OS_TYPE WINDOWS
#define MKDIR "mkdir "
#endif

// LINUX
#ifdef linux
#define OS_TYPE LINUX
#define MKDIR "mkdir -p "
#endif


/** 替换字符串中的字符 */
int strReplace(char*, char, char);
/** 创建多级目录 */
void mkdirs(char*);


int main(int argc, char *argv[]) {
    char *str;
    int i;
    if (argc >= 2) {
        for (i = 1; i < argc; i ++) {
            mkdirs(argv[i]);
        }
    } else {
        // 从路径中取出程序名
        str = strrchr(argv[0], '/');
        if (str == NULL) str = strrchr(argv[0], '\\');
        if (str != NULL) str = str + 1;
        else str = argv[0];
        printf("Command syntax error : %s path1 [path2]...\n", str);
        return -1;
    }
    return 0;
}

/**
 * 创建多级目录
 * @param path 目录
 * @return
 */
void mkdirs(char* path) {
    char str[512] = {0};
    strcat(str, MKDIR);
    strcat(str, path);
    if (OS_TYPE == WINDOWS) strReplace(str, '/', '\\');
    system(str);
}

/**
 * 替换字符串中的字符
 * @param str - 字符串
 * @param src - 要被替换的字符
 * @param dst - 替换目标字符
 * @return
 */
int strReplace(char* str, char src, char dst) {
    int count = 0;
    while (*str != '\0') {
        if (*str == src) {
            *str = dst;
        }
        str += 1;
    }
    return count;
}

