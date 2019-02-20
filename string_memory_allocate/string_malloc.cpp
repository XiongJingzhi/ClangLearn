#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

int main()
{
    char* str = (char*)malloc(1024 * 1024 * 1024);
    if (str == 0)
    {
        printf("memory allocate fail\n");
    }
    else
    {
        printf("memory allocate address:%x\n", str);
    }
    getch();
    free(str);
    return 0;
}