// Print the multiplication table of a given number
#include<stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int i=1;
    do
    {
        int add =n*i;
        printf("%d\n", add);
        i++;
    }while(i<=10);
    return 0;
}