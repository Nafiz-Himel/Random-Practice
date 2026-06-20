#include<stdio.h>
int main()
{
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld", &a,&b,&c,&d);
    long long int mul1 = a%100;
    long long int mul2 = b%100;
    long long int mul3 = c%100;
    long long int mul4 = d%100;
    long long int newly = (mul1*mul2*mul3*mul4)%100;
    printf("%02lld", newly);
    return 0;
}