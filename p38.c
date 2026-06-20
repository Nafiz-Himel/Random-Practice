#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int a[n];
    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &a[i]);
    }

    int b;
    scanf("%d", &b);

    for (int i = 1; i <= n; i++)
    {
        if (i == b)
        {
            if (a[i] == 0)
            {
                a[i] = 1;
            }
        }

        printf("%d ", a[i]);
    }
    return 0;
}