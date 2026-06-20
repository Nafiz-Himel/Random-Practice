// Calculate the sum of even numbers from 1 to n
#include<stdio.h>
int main()
{
    int n;
    int sum=0;
    scanf("%d", &n);
    int i=1;
    while(i<=n)
    {
        if(i%2==0)
        {
            sum= sum+i;
        }
        i++;
    }
    printf("%d", sum);
    return 0;
}