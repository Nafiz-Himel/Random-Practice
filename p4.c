// Check whether a given year is a leap year or not
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    if(a%4==0 || a%200==0)
    {
        printf("Leap Year");
    }
    else
    {
        printf("Not Leap Year");
    }
    return 0;
}