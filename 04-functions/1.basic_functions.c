#include <stdio.h>
 // 1. 函数声明（函数原型）
int add(int a, int b);          // 两个整数相加
void print_stars(int count);    // 打印指定数量的星号
int get_max(int x, int y);      // 返回两个数中的较大值
void greet(char name[]);        // 打招呼函数
int main() 
{
    printf("=== 函数基础示例 ===\n\n");
    // 2. 函数调用示例
    // 调用有返回值的函数
    int result = add(10, 20);
    printf("1. 加法函数调用:\n");
    printf("   10 + 20 = %d\n\n", result);

    // 调用无返回值的函数
    printf("2. 打印星号函数:\n");
    print_stars(5);
    printf("\n");

    // 直接使用函数返回值
    printf("3. 获取最大值:\n");
    printf("   25和37的最大值是: %d\n\n", get_max(25, 37));

    // 多次调用同一个函数
    printf("4. 多次函数调用:\n");
    for (int i = 1; i <= 3; i++) 
    {
        printf("   第%d次: ", i);
        print_stars(i);
    }
    printf("\n");

    // 函数调用作为参数
    printf("5. 函数嵌套调用:\n");
    printf("   add(5, get_max(3, 7)) = %d\n\n", add(5, get_max(3, 7)));

    // 字符串参数函数
    printf("6. 字符串参数函数:\n");
    greet("张三");
    greet("李四");

    return 0;
}
// 3. 函数定义（实现）
// 加法函数
int add(int a, int b) 
{
    return a + b;
}

// 打印星号函数
void print_stars(int count) 
{
    for (int i = 0; i < count; i++) 
    {
        printf("*");
    }
    printf("\n");
}

// 获取最大值函数
int get_max(int x, int y) 
{
    if (x > y) {
        return x;
    }
    else {
        return y;
    }
}

// 打招呼函数
void greet(char name[]) 
{
    printf("   你好，%s！欢迎学习C语言函数！\n", name);
}