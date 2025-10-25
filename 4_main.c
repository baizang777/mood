#include "stdio.h"
int main()
{
    int g, h, i;
    
    printf("请输入三个边长: ");
    scanf_s("%d %d %d", &g, &h, &i);
    
    if ((g + h > i) && (i + g > h) && (i + h > g))
        printf("可以组成三角形\n");
    else
        printf("不可以组成三角形\n");
    
    return 0;
}
