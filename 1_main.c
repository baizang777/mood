//202510125216
//zx18244358421xx@qq.com
//曾瑕
#include "stdio.h"
int main()
{
    float a, b;
    printf("请输入摄氏温度: ");
    scanf_s("%f", &a);
    b = a * ((float)9 / 5) + 32;
    printf("华氏度为%0.1f\n", b);
    return 0;
}
