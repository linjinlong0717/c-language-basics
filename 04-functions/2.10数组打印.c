#include <stdio.h>
// 正向打印数组
void printArrayForward(int arr[], int index, int size) 
{
    if (index >= size) 
    {
        return;  // 递归基：索引超出数组范围
    }
    printf("%d ", arr[index]);  // 打印当前元素
    printArrayForward(arr, index + 1, size);  // 递归打印下一个元素
}
int main() 
{
    int arr[] = { 1, 2, 3, 4, 5 };
    int size = sizeof(arr) / sizeof(arr[0]);
    printf("正向打印数组: ");
    printArrayForward(arr, 0, size);
    return 0;
}