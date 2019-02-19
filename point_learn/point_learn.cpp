#include <stdio.h>

int main()
{
    int n = 111;
    int* p = &n;
    printf("output\n%p", &p);
    return 0;
}