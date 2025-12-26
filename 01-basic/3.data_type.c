#include <stdio.h>
#include<stdbool.h>
int main() 
{
    int age = 18;
    short a = 32767;
    float price = 9.9f;
    double pi = 3.1415926;
    char grade = 'A';
    bool isStudent = true;
    bool isWorking = false;
    unsigned char byte = 255;
    printf("====== 数据类型大小 ======\n");
    printf("int: %zu bytes\n", sizeof(int));
    printf("short: %zu bytes\n", sizeof(short));
    printf("float: %zu bytes\n", sizeof(float));
    printf("double: %zu bytes\n", sizeof(double));
    printf("char: %zu bytes\n", sizeof(char));
    printf("bool: %zu bytes\n", sizeof(bool));
    printf("====== 变量示例 ======\n");
    printf("年龄：%d 岁\n", age);
    printf("价格: %.2f 元\n", price);
    printf("圆周率: %.7f\n", pi);
    printf("成绩等级：%c\n", grade);
    printf("是否为学生：%d\n", isStudent);
    printf("无符号字符值：%u\n", byte);
    return 0;
}
