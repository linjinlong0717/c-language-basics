#include <stdio.h>
// 递归函数统计数字位数
int countDigits(int n) 
{
    // 处理负数
    if (n < 0) 
    {
        return countDigits(-n);
    }
    // 递归终止条件：数字小于10，只有1位
    if (n < 10) 
    {
        return 1;
    }
    // 递归步骤：去掉最后一位，位数加1
    return 1 + countDigits(n / 10);
}
int main() 
{
    int num;
    printf("请输入一个整数: ");
    scanf("%d", &num);
    int digits = countDigits(num);
    printf("数字 %d 有 %d 位\n", num, digits);
    return 0;
}