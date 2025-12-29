#include <stdio.h>
int main() 
{
    // 1. 声明并初始化二维数组（3行4列）
    int matrix[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };
    // 遍历二维数组
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            printf("matrix[%d][%d] = %d\t", i, j, matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
