#include <stdio.h>
int main() 
{
    int day;
    printf("请输入星期几的数字 (1-7): ");
    scanf("%d", &day);
    switch (day) 
  {
    case 1:
        printf("星期一：新的一周开始！\n");
        break;
    case 2:
        printf("星期二：继续努力！\n");
        break;
    case 3:
        printf("星期三：一周过半！\n");
        break;
    case 4:
        printf("星期四：胜利在望！\n");
        break;
    case 5:
        printf("星期五：明天周末！\n");
        break;
    case 6:
        printf("星期六：享受周末！\n");
        break;
    case 7:
        printf("星期日：准备新的一周！\n");
        break;
    default:
        printf("错误：请输入1-7之间的数字！\n");
  }
    return 0;
}
