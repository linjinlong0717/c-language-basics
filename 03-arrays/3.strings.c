#include <stdio.h>
#include <string.h>  // 字符串操作函数头文件
int main() 
{
    // 1. 字符串的声明和初始化
    printf("=== 字符串声明和初始化 ===\n");

    // 方式1: 字符数组初始化
    char str1[] = "Hello, World!";
    printf("str1: %s\n", str1);

    // 方式2: 指定大小的字符数组
    char str2[20] = "Hello, C!";
    printf("str2: %s\n", str2);

    //方式1和2初始化会自动在末尾添加'\0'

    // 方式3: 逐个字符初始化
    char str3[] = { 'H', 'e', 'l', 'l', 'o', '\0' };
    printf("str3: %s\n", str3);

    // 方式4: 指针方式
    char* str4 = "String literal";
    printf("str4: %s\n", str4);

    // 2. 字符串长度
    printf("\n=== 字符串长度 ===\n");
    printf("str1 长度 (strlen): %zu\n", strlen(str1));
    printf("str1 大小 (sizeof): %zu\n", sizeof(str1));

    // 3. 字符串输入输出
    printf("\n=== 字符串输入输出 ===\n");

    // 使用 printf 输出
    printf("输出字符串: %s\n", str1);

    // 使用 puts 输出（自动换行）
    puts("使用puts输出:");
    puts(str1);

    // 字符数组输入
    char input[50];
    printf("请输入一个字符串: ");
    scanf("%49s", input);  // 限制输入长度防止溢出   //scanf在读取字符末尾自动添加结束符'\0',所以存储这些字符至少需要50个字节空间。
    printf("您输入的是: %s\n", input);

    // 清空输入缓冲区
    while (getchar() != '\n');

    // 读取带空格的字符串
    printf("请输入带空格的字符串: ");
    fgets(input, sizeof(input), stdin);
    input[strcspn(input, "\n")] = '\0';//把换行变成'\0'。
    printf("fgets读取: %s\n", input);
    return 0;
}