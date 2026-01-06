#include <stdio.h>
 // 递归阶乘函数      //注意递归缺点就是时间复杂度会比较大，容易溢出
                      //优点是比较简洁
int factorial(int n) 
{
    // 基本情况：0! = 1, 1! = 1
    if (n <= 1) 
    {
        return 1;
    }
    // 递归情况：n! = n × (n-1)!
    return n * factorial(n - 1);
}
int main() 
{
    // 示例计算
    printf("阶乘示例：\n");
    // 计算 0 到 5 的阶乘
    for (int i = 0; i <= 5; i++) 
    {
        printf("%d! = %d\n", i, factorial(i));
    }
    // 用户输入
    int n;
    printf("\n请输入一个数字计算阶乘：");
    scanf("%d", &n);
    if (n < 0) 
    {
        printf("错误：阶乘只定义在非负整数！\n");
    }
    else 
    {
        printf("%d! = %d\n", n, factorial(n));
    }
    return 0;
}