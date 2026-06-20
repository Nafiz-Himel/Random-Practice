#include <stdio.h>
int main()
{
    long long int a;
    scanf("%lld", &a);

    char b;
    scanf("%c", &b);

    long long int c;
    scanf("%lld", &c);

    if (b == '+')
    {
        printf("%lld", a + c);
    }

    if (b == '-')
    {
        printf("%lld", a - c);
    }

    if (b == '*')
    {
        printf("%lld", a * c);
    }

    if (b == '/')
    {
        printf("%lld", a / c);
    }
    return 0;
}