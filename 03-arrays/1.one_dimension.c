#include <stdio.h>
int main() 
   {
    // 方法1：指定大小并初始化
    int arr1[5] = { 1, 2, 3, 4, 5 };
    // 方法2：不指定大小，编译器自动计算
    int arr2[] = { 10, 20, 30, 40, 50 };
    // 方法3：部分初始化，其余自动为0
    int arr3[5] = { 1, 2, 3 };  // arr3[3]和arr3[4]为0
    printf("数组1: ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", arr1[i]);
    }
    printf("\n数组2: ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", arr2[i]);
    }
    printf("\n数组3: ");
    for (int i = 0; i < 5; i++) 
    {
        printf("%d ", arr3[i]);
    }

    int scores[5];
    // 使用循环输入数据
    printf("请输入5个分数:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("分数%d: ", i + 1);
        scanf("%d", &scores[i]);
    }
    // 使用循环输出数据
    printf("\n输入的分数是:\n");
    for (int i = 0; i < 5; i++) 
    {
        printf("学生%d: %d分\n", i + 1, scores[i]);
    }
    // 计算总分和平均分
    int total = 0;
    for (int i = 0; i < 5; i++) 
    {
        total += scores[i];
    }
    printf("\n总分: %d\n", total);
    printf("平均分: %.2f\n", total / 5.0);

    // 获取数组的大小
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("数组包含 %d 个元素\n", size);
    printf("整个数组占用 %zu 字节\n", sizeof(arr));
    printf("每个元素占用 %zu 字节\n", sizeof(arr[0]));
    return 0;
}
