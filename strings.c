#include <string.h>
#include <stdio.h>

int main()
{
    char alphabet[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    printf("%lu\n", strlen(alphabet));
    printf("%lu\n", sizeof(alphabet));
    return 0;
}