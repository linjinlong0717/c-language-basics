#include <stdio.h>
int main() 
{
    int a = 10, b = 3;
    printf("算术运算符演示\n");
    printf("a = %d, b = %d\n", a, b);
    printf("a + b = %d\n", a + b);  // 加法
    printf("a - b = %d\n", a - b);  // 减法
    printf("a * b = %d\n", a * b);  // 乘法
    printf("a / b = %d\n", a / b);  // 除法(整数取整)
    printf("a %% b = %d\n", a % b); // 取余(模运算)

    int x = 8;
    printf("赋值运算符演示\n");
    printf("初始x = %d\n", x);
    x += 2;  // x = x+2
    printf("x += 2 → %d\n", x);
    x -= 3;  // x = x-3
    printf("x -= 3 → %d\n", x);
    x *= 4;  // x = x*4
    printf("x *= 4 → %d\n", x);
    x /= 5;  // x = x/5
    printf("x /= 5 → %d\n", x);
    x %= 2;  // x = x%2
    printf("x %%= 2 → %d\n", x);

    int m = 5, n = 5;
    int res1, res2;
    printf("自增自减运算符演示\n");
    // 前置++ --
    res1 = ++m;  // m先+1，再赋值给res1
    res2 = --n;  // n先-1，再赋值给res2
    printf("前置: ++5 → %d, --5 → %d\n", res1, res2);
    printf("此时m=%d, n=%d\n", m, n);
    // 后置++ --
    m = 5, n = 5;
    res1 = m++;  // 先赋值给res1，m再+1
    res2 = n--;  // 先赋值给res2，n再-1
    printf("后置: 5++ → %d, 5-- → %d\n", res1, res2);
    printf("此时m=%d, n=%d\n", m, n);

    int p = 7, q = 4;
    printf("关系运算符演示(0=假,1=真)\n");
    printf("p > q  → %d\n", p > q);   // 大于
    printf("p < q  → %d\n", p < q);   // 小于
    printf("p >= q → %d\n", p >= q);  // 大于等于
    printf("p <= q → %d\n", p <= q);  // 小于等于
    printf("p == q → %d\n", p == q);  // 等于(注意是==不是=)
    printf("p != q → %d\n", p != q);  // 不等于

    int flag1 = 1, flag2 = 0; // 1真 0假
    printf("逻辑运算符演示(0=假,1=真)\n");
    // 逻辑与&&：全真才真，一假就假
    printf("1 && 0 → %d\n", flag1 && flag2);
    // 逻辑或||：一真就真，全假才假
    printf("1 || 0 → %d\n", flag1 || flag2);
    // 逻辑非!：真假互换
    printf("!1 → %d, !0 → %d\n", !flag1, !flag2);

    int max, abs_num;
    printf("三目运算符演示\n");// 三目运算符：条件 ? 表达式1 : 表达式2
    // 求绝对值
    int num = -2;
    abs_num = num >= 0 ? num : -num;
    printf("%d的绝对值 = %d\n", num, abs_num);
    // 比较两数最大值
    int c = 15, d = 23;
    max = c > d ? c : d;
    printf("%d和%d的最大值 = %d\n", c, d, max);

    int e = 6, f = 3;  // 6=0110, 3=0011(二进制)
    printf("位运算符演示(十进制)\n");
    printf("e=%d(0110), f=%d(0011)\n", e, f);
    printf("e & f  = %d\n", e & f);   // 按位与：对应位都1才1 → 0010=2
    printf("e | f  = %d\n", e | f);   // 按位或：对应位有1就1 → 0111=7
    printf("e ^ f  = %d\n", e ^ f);   // 异或：对应位不同为1 → 0101=5
    printf("~e     = %d\n", ~e);      // 取反：所有位翻转(含符号位)
    printf("e << 1 = %d\n", e << 1);  // 左移1位=×2 → 12
    printf("e >> 1 = %d\n", e >> 1);  // 右移1位=÷2 → 3
    return 0;
}
