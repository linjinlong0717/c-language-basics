/*
   basic_pointers.c - C语言指针基础知识
   主要内容：
   1. 指针的基本概念和声明
   2. 取地址(&)和解引用(*)操作符
   3. 指针运算
   4. 指针与const
   5. 空指针和野指针
 */
#include <stdio.h>
int main()                                                  
{
    // 1. 基本指针概念
    int num = 42;
    int* ptr = &num;  // ptr指向num
    printf("   num的值: %d\n", num);
    printf("   num的地址: %p\n", (void*)&num);   //格式符 %p 期望 void* 类型
    printf("   ptr存储的地址: %p\n", (void*)ptr);
    printf("   通过ptr访问值(*ptr): %d\n", *ptr);

    // 2. 通过指针修改变量
    *ptr = 100;
    printf("   num的值: %d\n", num);
    printf("   *ptr的值: %d\n", *ptr);

    // 3. 指针运算
    int a = 10, b = 20;
    int* p1 = &a, * p2 = &b;
    printf("   a的地址: %p, b的地址: %p\n", (void*)p1, (void*)p2);
    printf("   地址差(字节): %ld\n", (long)p2 - (long)p1);                                                    //第一个是数值计算（地址值相减）
    printf("   元素差: %td\n", p2 - p1);  // 假设int是4字节  p2 - p1 的结果是 ptrdiff_t 类型（指针差值类型） 用%td   第二个是指针运算（编译器自动除以类型大小）

    // 指针加减
    printf("\n   指针加减运算:\n");
    int arr[] = { 10, 20, 30, 40, 50 };
    int* arr_ptr = &arr[2];  // 指向第三个元素
    printf("   arr_ptr指向: arr[2] = %d\n", *arr_ptr);
    printf("   arr_ptr - 1 指向: arr[1] = %d\n", *(arr_ptr - 1));
    printf("   arr_ptr + 2 指向: arr[4] = %d\n", *(arr_ptr + 2));

    // 4. 指针与const
    int x = 5, y = 10;

    // 指向常量的指针
    const int* ptr_to_const = &x;
    printf("   a) 指向常量的指针: const int *ptr_to_const\n");
    printf("      *ptr_to_const = %d\n", *ptr_to_const);
    // *ptr_to_const = 15;  // 错误！不能修改值
    ptr_to_const = &y;       // 但可以改变指向
    printf("      可以改变指向: ptr_to_const = &y\n");
    printf("      现在 *ptr_to_const = %d\n\n", *ptr_to_const);

    // 常量指针
    int* const const_ptr = &x;
    printf("   b) 常量指针: int *const const_ptr\n");
    *const_ptr = 25;        // 可以修改值
    printf("      可以修改值: *const_ptr = 25\n");
    printf("      现在 x = %d\n", x);
    // const_ptr = &y;      // 错误！不能改变指向
    printf("      但不能改变指向\n\n");

    // 指向常量的常量指针
    const int* const const_ptr_to_const = &x;
    printf("   c) 指向常量的常量指针: const int *const const_ptr_to_const\n");
    printf("      既不能修改值，也不能改变指向\n");

    // 5. 空指针和野指针

    // 空指针
    int* null_ptr = NULL;
    printf("   a) 空指针: int *null_ptr = NULL;\n");
    printf("      null_ptr = %p\n", (void*)null_ptr);

    if (null_ptr == NULL) 
    {
        printf("      这是空指针，不应解引用！\n");
    }

    // 野指针
    int* wild_ptr;  // 未初始化，是野指针
    printf("\n   b) 野指针: int *wild_ptr; (未初始化)\n");
    printf("      野指针指向随机内存地址\n");
    printf("      使用前必须初始化！\n");

    // 6. void指针(通用指针)
    int int_val = 65;
    float float_val = 3.14f;
    void* void_ptr;
    void_ptr = &int_val;
    printf("   void_ptr指向int: %d\n", *(int*)void_ptr);
    void_ptr = &float_val;
    printf("   void_ptr指向float: %.2f\n", *(float*)void_ptr);
    return 0;
}