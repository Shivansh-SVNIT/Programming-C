#include<stdio.h>
int main()
//number of odd elements and even elements 
{
	int r,a[10],sum=0,count1=0,count2=0;
    printf("Enter numbers\n");
	for(r=1;r<=10;r++)
    {
         scanf("%d",&a[r-1]);
         if(a[r-1]%2==0)
         {
              count2++;
         }
         else
         {
              count1++;
         }
    }
    printf("\nnumber of even elements %d",count2);  
    printf("\nnumber of odd elements %d",count1);     
}    
     