// Write a C program to find the sum of all numbers from 1 to 50 using a for loop
#include<stdio.h>
int main()
{
    int i =0;
    int sum =0;
    for(i=1;i<=50;i++)
    {
        sum = sum+i;
    }
    printf("%d", sum);
}