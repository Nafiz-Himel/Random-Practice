// Calculate the sum of numbers from 1 to n
#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    scanf("%d", &n);
    int i=1;
    while(i<=n)
    {
        sum= sum+i;
        i++;
    }
    printf("%d\n", sum);
}