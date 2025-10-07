#include<stdio.h>
//finding price of things according to sales(price)
int main()
{
    float sales,total;
    printf("Enter sales ammount\n");
	scanf("%f",&sales);
    if(sales<=500)
    {
          total=sales+(5.0/100)*sales;
          printf("Total price is %f",total);
    }
    else if(sales<=2000)
    {
          total=sales+35+(10.0/100)*sales;
          printf("Total price is %f",total);
    }
    else if(sales<=5000)
    {
          total=sales+185+(12.0/100)*(sales-2000);
          printf("Total price is %f",total);
    }
    else
    {
          total=sales+(12.5/100)*sales;
          printf("Total price is %f",total);
    }
}
