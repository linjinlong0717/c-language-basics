#include <stdio.h>
// 递归计算斐波那契数列的第n项
int fibonacci(int n) 
{
    // 基线条件：前两项直接返回
    if (n <= 2) 
    {
        return 1;
    }
    // 递归条件：F(n) = F(n-1) + F(n-2)
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main() 
{
    int n;
    printf("请输入要计算的斐波那契数列项数：");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("请输入正整数！\n");
        return 1;
    }
    printf("斐波那契数列前%d项：\n", n);
    for (int i = 1; i <= n; i++) 
    {
        printf("F(%d) = %d\n", i, fibonacci(i));
    }
    return 0;
}