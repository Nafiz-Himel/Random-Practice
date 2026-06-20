#include <stdio.h>
int main()
{
    int m;
    scanf("%d", &m);

    if (m >= 1000)
    {
        printf("Three Kacchi");
    }

    else if (m >= 500 && m < 1000)
    {
        printf("One Large Pizza");
    }

    else if (m >= 250 && m < 500)
    {
        printf("Three Small Burger");
    }

    else if (m >= 100 && m < 250)
    {
        printf("Three Fuchka");
    }
    else if (m < 100)
    {
        printf("Nothing");
    }
    return 0;
}