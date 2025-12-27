#include <stdio.h>
int main() 
{
    int num = 10;
    // 基本的if-else语句
    if (num > 0) {
        printf("数字是正数\n");
    }
    else {
        printf("数字是负数或零\n");
    }
    int age = 25;
    int hasLicense = 1;
    // 嵌套的if-else语句
    if (age >= 18) 
    {
        printf("你已经成年了\n");
        if (hasLicense) 
        {
            printf("你可以合法驾驶汽车\n");
        }
        else {
            printf("你需要先考取驾照才能开车\n");
        }
    }
    else 
    {
        printf("你还未成年\n");
    }
    return 0;
}

