#include<stdio.h>
int main()
// finding head size
{
	float n,df;
    int D;
    
    printf("Enter circumference of head\n");
    scanf("%f",&n);
    df=(n-20.6)/0.4;
    D=(int)df;
    printf("\nYour hat size is %f",(6.5+D*(0.125)));
    
}
    