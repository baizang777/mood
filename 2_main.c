#include "stdio.h"
int main()
{
    int c;
    printf("请输入成绩(0-100): ");
    scanf_s("%d", &c);
    
    if (c <= 100 && c >= 90)
        printf("成绩为A\n");
    if (c <= 89 && c >= 80)
        printf("成绩为B\n");
    if (c <= 79 && c >= 70)
        printf("成绩为C\n");
    if (c <= 69 && c >= 60)
        printf("成绩为D\n");
    if (c < 60 && c >= 0)
        printf("成绩为E\n");
    if (c < 0 || c > 100)
        printf("成绩无效\n");
    
    return 0;
}
