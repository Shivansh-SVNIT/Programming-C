#include<stdio.h>
//number is armstorm or not
int main()
{
     int num,sum=0,p,n;
     printf("Enter number\n");
     scanf("%d",&num);
     n=num;
     
     while(n>0)
     {
          p=n%10;
          n=n/10;
          sum=sum+p*p*p;
          
     }
     if(sum==num)
     {
          printf("your number is armstorm number");
     }
     else
     {
          printf("your number is not armstorm number");
     }
     
}