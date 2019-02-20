#include <stdio.h>

int main()
{
    int n = 111;
    printf("n adress:%x\n", &n);
    printf("n value:%d\n", n);

    int* ptr_n = &n;
    printf("ptr_n address :%x\n", &ptr_n);
    printf("ptr_n byte%d\n", sizeof(ptr_n));
    printf("ptr_n value %d\n", ptr_n);

    char ch = 'X';
    printf("ch address: %d\n", &ch);
    printf("ch value: %d\n", ch);

    char* ptr_ch = &ch;
    printf("pt adress%d\n", &ptr_ch);
    printf("ptr_ch how many byte%d\n", sizeof(ptr_ch));
    printf("ptr_ch value%d\n", ptr_ch);
    return 0;
}