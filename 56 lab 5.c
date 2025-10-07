#include<stdio.h>
int main()
//finding number is positive ,negative and zero
{
	int r,a[10],sum=0,countN=0,countP=0,countZ=0;
    printf("Enter numbers\n");
	for(r=1;r<=10;r++)
    {
         scanf("%d",&a[r-1]);
         if(a[r-1]>0)
         {
              countP++;
         }
         else if(a[r-1]<0)
         {
              countN++;
         }
         else
         {
              countZ++;
         }
    }
    printf("\nnumber of positive elements %d",countP);  
    printf("\nnumber of nagative elements %d",countN);
    printf("\nnumber of Zero elements %d",countZ);     
}    
     