#include<stdio.h>
struct item
{
    char item_name[200];
    int quantity;
    int price;
    int amount;

};
int main()
{
    struct item x;
    printf("enter the name of the product:\n");
    gets(x.item_name);

    // printf("%s",x.item_name);
    printf("enter the quantity of the product:\n");
    scanf("%d",&x.quantity);

    printf("enter the price of the product:\n");
    scanf("%d",&x.price);

    x.amount=x.price*x.quantity;

    printf("the amount of the product is %d",x.amount);
}
