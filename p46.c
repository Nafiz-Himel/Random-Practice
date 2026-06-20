#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);

    int space = n;
    int num = 1;
    for (int i = 1; i <= n; i++)
    {

        for (int i = 1; i <= space; i++)
        {
            printf(" ");
        }
        for (int j = 1; j <= num; j++)
        {
            printf("*");
        }
        printf("\n");
        space--;
        num += 2;
    }
    return 0;
}