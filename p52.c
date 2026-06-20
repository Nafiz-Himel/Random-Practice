#include <stdio.h>
void fun()
{
    int n;
    scanf("%d", &n);
    long long int result = 1;
    for (int i = 1; i <= n; i++)
    {
        result *= i;
    }
    printf("%lld", result);
}

int main()
{
    fun();
    return 0;
}