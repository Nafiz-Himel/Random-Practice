// Take two numbers and print which one is greater
#include<stdio.h>
int main()
{
    int a;
    int b;
    scanf("%d %d", &a,&b);
    if(a>b)
    {
        printf("%d", a);
    }
    else
    {
        printf("%d", b);
    }
    return 0;
}