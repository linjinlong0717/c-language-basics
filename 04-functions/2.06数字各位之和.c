#include <stdio.h>
#include <stdlib.h>  // 用于abs()函数   //fabss()函数在math.h的头文件里面
int sum_of_digits(int number) 
{
    // 处理负数情况
    number = abs(number);

    // 基准情况：如果只有一位数字
    if (number < 10) 
    {
        return number;
    }

    // 递归情况：最后一位数字 + 剩余数字的和
    return (number % 10) + sum_of_digits(number / 10);
}
int main() 
{
    printf("sum_of_digits(123) = %d\n", sum_of_digits(123));      // 输出: 6
    printf("sum_of_digits(4567) = %d\n", sum_of_digits(4567));    // 输出: 22
    printf("sum_of_digits(-123) = %d\n", sum_of_digits(-123));    // 输出: 6
    printf("sum_of_digits(0) = %d\n", sum_of_digits(0));          // 输出: 0

    return 0;
}