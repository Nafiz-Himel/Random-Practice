#include<stdio.h>
int main()
{
    long long int a,b,c,d;
    scanf("%lld %lld %lld %lld", &a,&b,&c,&d);
    long long int mul1 = a*b;
    long long int mul2 = c*d;
    long long int final = mul1-mul2;
    printf("Difference = %lld", final);
    return 0;
}