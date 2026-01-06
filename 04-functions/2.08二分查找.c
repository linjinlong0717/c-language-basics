#include <stdio.h>
// 递归二分查找函数
int binarySearch(int arr[], int left, int right, int target) 
{
    // 递归终止条件：搜索区间无效
    if (left > right) 
    {
        return -1;  // 未找到，返回-1
    }
    // 计算中间位置（防止整数溢出）
    int mid = left + (right - left) / 2;
    // 找到目标值
    if (arr[mid] == target) 
    {
        return mid;
    }
    // 目标值在左半部分
    else if (arr[mid] > target) 
    {
        return binarySearch(arr, left, mid - 1, target);
    }
    // 目标值在右半部分
    else 
    {
        return binarySearch(arr, mid + 1, right, target);
    }
}
int main() 
{
    int arr[] = { 2, 5, 8, 12, 16, 23, 38, 45, 56, 72 };
    int size = sizeof(arr) / sizeof(arr[0]);
    int target = 23;
    int result = binarySearch(arr, 0, size - 1, target);
    if (result != -1) 
    {
        printf("找到 %d 在索引 %d\n", target, result);
    }
    else 
    {
        printf("%d 不在数组中\n", target);
    }
    return 0;
}