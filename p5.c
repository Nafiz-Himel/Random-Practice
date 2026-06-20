// Take the price of a product. If it's more than 1000, give 10% discount, otherwise 5%. Print the final price
#include<stdio.h>
int main()
{
    int a;
    float b = 0.10;
    float c = 0.05;
    scanf("%d", &a);
    if(a>1000)
    {
        float price = a*b;
        float final_price = a-price;
        printf("%.2f", final_price);
    }
    else
    {
        float price = a*c;
        float final_price = a-price;
        printf("%.2f", final_price);
    }
    return 0;
}