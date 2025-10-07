#include<stdio.h>
int main()
//sum of vales of array
{
	int r,a[10],sum=0;
    printf("Enter numbers\n");
	for(r=1;r<=10;r++)
    {
         scanf("%d",&a[r-1]);
    }
    for(r=1;r<=10;r++)
    {
         sum=sum+a[r-1];
    }
    printf("\nsum of elements is  %d",sum);    
}    
     