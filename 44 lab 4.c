#include<stdio.h>
//finding Electricity charge from unit 
int main()
{
    float unit,total;
    printf("Enter meter reading (unit)\n");
	scanf("%f",&unit);
    if(unit<=200)
    {
          total=(0.5)*unit;
          printf("Total price is %f",total);
    }
    else if(unit<=400)
    {
          total=100+(0.65)*(unit-200);
          printf("Total price is %f",total);
    }
    else if(unit<=600)
    {
          total=230+(0.8)*(unit-400);
          printf("Total price is %f",total);
    }
    else
    {
          total=425+(125)*(unit-600);
          printf("Total price is %f",total);
    }
}
