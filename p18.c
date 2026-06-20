// Print the multiplication table of a given number
#include<stdio.h>
int main()
{
    int a;
    scanf("%d", &a);
    int i=1;
    while(i<=10)
    {
        int add= a*i;
        printf("%d\n", add);
        i++;
    }

    return 0;
}