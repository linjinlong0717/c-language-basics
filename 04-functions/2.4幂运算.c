#include <stdio.h>
// 递归函数：计算 base 的 exp 次幂
int power(int base, int exp) 
{
    // 基本情况1：任何数的0次幂都是1
    if (exp == 0) 
    {
        return 1;
    }
    // 基本情况2：任何数的1次幂都是它本身
    if (exp == 1) 
    {
        return base;
    }
    // 递归情况：base^exp = base * base^(exp-1)
    return base * power(base, exp - 1);
}
int main() 
{
    printf("2^0 = %d\n", power(2, 0));      // 输出: 1
    printf("2^1 = %d\n", power(2, 1));      // 输出: 2
    printf("2^5 = %d\n", power(2, 5));      // 输出: 32
    printf("3^4 = %d\n", power(3, 4));      // 输出: 81
    printf("5^3 = %d\n", power(5, 3));      // 输出: 125
    printf("10^2 = %d\n", power(10, 2));    // 输出: 100
    return 0;
}