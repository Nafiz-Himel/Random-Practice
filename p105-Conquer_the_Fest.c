#include <stdio.h>

int main()
{
    int a, b;
    scanf("%d %d", &a, &b);

    if ((b * 10) <= a)
        printf("YES\n");
    else
        printf("NO\n");
}
