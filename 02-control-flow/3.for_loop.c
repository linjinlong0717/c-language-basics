#include <stdio.h>
int main() 
{
    // 基础for循环：初始化i=1; 条件i<=5; 每次+1，遍历1-5
    for (int i = 1; i <= 5; i++) 
    {
        printf("当前i值：%d\n", i);
    }

    // 反向遍历：初始化i=10; 条件i>=1; 每次-2，步长为2
    for (int i = 10; i >= 1; i -= 2) 
    {
        printf("反向步长遍历：%d\n", i);
    }
    int sum = 0;

    // for循环求和：1-100累加
    for (int i = 1; i <= 100; i++) 
    {
        sum += i; // 等价sum = sum + i
    }
    printf("1-100累加和：%d\n", sum);

    // 嵌套for循环：外层控制行，内层控制列，打印3行5列矩形
    for (int row = 1; row <= 3; row++) 
    { // 外层：3行
        for (int col = 1; col <= 5; col++) 
        { // 内层：5列
            printf("*");
        }
        printf("\n"); // 每行结束换行
    }

    // 九九乘法表：i为被乘数，j为乘数，j<=i避免重复
    for (int i = 1; i <= 9; i++) 
    {
        for (int j = 1; j <= i; j++) 
        {
            printf("%d*%d=%-2d ", j, i, i * j); // %-2d左对齐，占2位
        }
        printf("\n");
    }
    return 0;
}
