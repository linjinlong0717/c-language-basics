#include <stdio.h>
int main()
{
    // ==========  指针与数组的关系 ==========
    printf(" 指针与数组的关系:\n");
    int arr[5] = { 10, 20, 30, 40, 50 };
    int* ptr = arr;  // ptr指向数组第一个元素
    // 数组名就是指针
    printf("   arr = %p\n", arr);
    printf("   &arr[0] = %p\n", &arr[0]);
    printf("   arr == &arr[0]: %s\n\n", arr == &arr[0] ? "true" : "false");
    // 使用指针访问数组
    printf("   使用指针访问数组:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("   *(ptr + %d) = %d\n", i, *(ptr + i));
    }
    printf("\n");
    // ==========  指针运算 ==========
    printf(" 指针运算:\n");
    printf("   ptr当前指向的值: %d\n", *ptr);

    ptr++;  // 移动到下一个元素
    printf("   ptr++后指向的值: %d\n", *ptr);

    ptr += 2;  // 向后移动2个元素
    printf("   ptr+=2后指向的值: %d\n", *ptr);

    ptr--;  // 向前移动1个元素
    printf("   ptr--后指向的值: %d\n\n", *ptr);
    // ==========  数组作为函数参数 ==========
    // 重置指针
    ptr = arr;
    // 计算数组元素和
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        sum += *(ptr + i);
    }
    printf("   数组元素和: %d\n\n", sum);
    // ========== 指针数组 ==========
    printf(" 指针数组:\n");
    int a = 1, b = 2, c = 3;
    int* ptr_arr[3] = { &a, &b, &c };
    for (int i = 0; i < 3; i++) 
    {
        printf("   ptr_arr[%d] = %p, *ptr_arr[%d] = %d\n", i, ptr_arr[i], i, *ptr_arr[i]);
    }
    printf("\n");
    // ========== 字符串与指针 ==========
    printf(" 字符串与指针:\n");
    char str1[] = "Hello";  // 字符数组
    char* str2 = "World";   // 字符指针(注意：?%s?接受的是?字符指针 (char*))

    printf("   字符数组str1: %s\n", str1);
    printf("   字符指针str2: %s\n", str2);

    // 可以修改字符数组
    str1[0] = 'h';
    printf("   修改后str1: %s\n\n", str1);

    // ==========  二维数组与指针 ==========
    printf(" 二维数组与指针:\n");
    int matrix[2][3] = { {1, 2, 3}, {4, 5, 6} };

    // 访问二维数组
    printf("   matrix[1][2] = %d\n", matrix[1][2]);

    // 使用指针访问
    printf("   使用指针遍历二维数组:\n   ");
    int* p_matrix = &matrix[0][0];
    for (int i = 0; i < 6; i++) 
    {
        printf("%d ", *p_matrix);
        p_matrix++;
    }
    printf("\n\n");

    // ==========  常见错误示例 ==========
    printf("   指针需要初始化才能使用\n");
    printf("   指针运算要考虑数据类型大小\n");
    printf("   字符指针指向的字符串可能不可修改\n");
    return 0;
}