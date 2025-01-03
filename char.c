#include <stdio.h>

// 添加中文后会以utf-8编码保存

char carName[] = "Volvo";
int length = sizeof(carName) / sizeof(carName[0]);
int i;

int main()
{
    for (i = 0; i < length; ++i)
    {
        printf("%c\n", carName[i]);
    }
    return 0;
}