#include<stdio.h>
int main()
{
    char n;
    scanf("%c", &n);
    
    if('i'== n || 'o'== n || 'u'== n || 'e'== n || 'a' == n)
    {
        printf("Vowel");
    }
    else
    {
        printf("Consonant");
    }
    return 0;
}