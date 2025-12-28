#include <stdio.h>
int main() 
{
    // 示例1: 基础计数循环
    printf("=== 基础计数循环 ===\n");
    int count = 1;
    while (count <= 5) 
    {
        printf("当前计数: %d\n", count);
        count++;  // 不要忘记更新循环变量，否则会无限循环！
    }

    // 示例2: 用户输入验证循环
    printf("=== 用户输入验证 ===\n");
    int number;
    printf("请输入一个1-10之间的数字: ");
    scanf("%d", &number);
    while (number < 1 || number > 10) 
    {
        printf("输入无效！请输入1-10之间的数字: ");
        scanf("%d", &number);
    }
    printf("你输入了有效的数字: %d\n", number);

    // 示例3: 计算数字的位数
    printf("=== 计算数字位数 ===\n");
    long long num;
    int digits = 0;
    printf("请输入一个正整数: ");
    scanf("%lld", &num);
    // 处理0的情况
    if (num == 0) 
    {
        digits = 1;
    }
    else 
    {
        while (num != 0) 
        {
            num /= 10;  // 去掉最后一位
            digits++;
        }
    }
    printf("该数字有 %d 位\n", digits);
    return 0;
}