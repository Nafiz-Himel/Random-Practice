// Write a C program to print the multiplication table of 7 (from 1×7 to 10×7) using a for loop
#include<stdio.h>
int main()
{
    for(int i=7; i<=70; i+=7)
    {
        int sum =1;
        sum= sum*i;
        printf("%d\n", sum);
    }
}