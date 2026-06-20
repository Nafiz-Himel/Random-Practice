// Calculate the sum of numbers from 1 to n
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int sum= 0;
    int i=1;
    do
    {
        sum= sum+i;
        i++;
    }while(i<=n);
    printf("%d\n", sum);
    return 0;
}