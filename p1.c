// Take the user's age and print whether the person is an adult or not. (18 or above = Adult)
#include<stdio.h>
int main()
{
    int age;
    scanf("%d", &age);
    if(age>=18)
    {
        printf("Adult");
    }
    else
    {
        printf("Younger");
    }
    return 0;
}