#include "stdio.h"
int main()
{
    int d, f;
    char e;
    
    printf("请输入算式 (例如: 5 + 3): ");
    scanf_s("%d %c %d", &d, &e, sizeof(e), &f);
    
    switch (e)
    {
    case '+':
        printf("%d+%d=%d\n", d, f, d + f);
        break;
    case '-':
        printf("%d-%d=%d\n", d, f, d - f);
        break;
    case '*':
        printf("%d*%d=%d\n", d, f, d * f);
        break;
    case '/':
        if (f == 0)
        {
            printf("不可运算\n");
        }
        else
        {
            printf("%d/%d=%d\n", d, f, d / f);
        }
        break;
    default:
        printf("错误指令\n");
        break;
    }
    
    return 0;
}
