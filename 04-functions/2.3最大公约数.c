#include <stdio.h>
// 递归函数：计算最大公约数（欧几里得算法）
int gcd(int a, int b) 
{
    // 基本情况：当 b 为 0 时，a 就是最大公约数
    if (b == 0) 
    {
        return a;
    }
    // 递归情况：gcd(a, b) = gcd(b, a % b)
    return gcd(b, a % b);
}
int main() 
{
    printf("GCD of 48 and 18: %d\n", gcd(48, 18));      // 输出: 6
    printf("GCD of 101 and 103: %d\n", gcd(101, 103));  // 输出: 1
    return 0;
}