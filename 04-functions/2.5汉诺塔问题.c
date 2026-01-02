#include <stdio.h>
// 递归函数：计算移动n个圆盘的最少步数
long long hanoi_steps(int n) 
{
    if (n == 1) 
    {
        return 1;
    }
    return 2 * hanoi_steps(n - 1) + 1;
}
int main() 
{
    int n;
    printf("请输入汉诺塔的圆盘数量 n: ");
    scanf("%d", &n);
    if (n <= 0) 
    {
        printf("错误：圆盘数量必须为正整数！\n");
        return 1;
    }
    if (n > 40) 
    {
        printf("注意：n较大，递归计算可能较慢...\n");
    }
    long long steps = hanoi_steps(n);
    printf("\n移动 %d 个圆盘最少需要 %lld 步\n", n, steps);
    return 0;
}