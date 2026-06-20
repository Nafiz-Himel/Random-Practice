// Write a C program to calculate the sum of even numbers and the sum of odd numbers from 1 to 100 using a single for loop
#include<stdio.h>
int main()
{
    int sum =0;
    for( int i=1;i<=100;i++)
    {
        if(i%2==1)
        {
            sum= sum+i;
        }
    }
    printf("%d\n", sum);
}
    