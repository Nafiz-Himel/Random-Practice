#include <stdio.h>
void fun()
{
    float py;
    int r;
    scanf("%f %d", &py ,&r);
    printf("%lld", py * (r * r));
}

int main()
{
    fun();
    return 0;
}