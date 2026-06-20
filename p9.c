// ake the marks of 5 subjects and print “Pass” if all are ≥ 40, otherwise “Fail”
#include<stdio.h>
int main()
{
    int a,b,c,d,e;
    scanf("%d %d %d %d %d", &a,&b,&c,&d,&e);
    if(a>=40 && b>=40 && c>=40 && d>=40 && e>=40)
    {
        printf("Pass");
    }
    else
    {
        printf("Fail");
    }
    return 0;
}