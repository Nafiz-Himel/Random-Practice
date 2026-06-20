// Take three angles and check whether they form a valid triangle (sum = 180)
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d %d %d", &a,&b,&c);
    int sum = a+b+c;
    if(sum == 180)
    {
        printf("Valid Triangle");
    }
    else 
    {
        printf("Invalid Triangle");
    }
    return 0;
}