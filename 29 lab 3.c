#include<stdio.h>
//number is pelidrome or not
int main()
{
     int num,sum=0,p,n;
     printf("Enter number\n");
     scanf("%d",&n);
     num=n;
     while(num>0)
     {
          p=num%10;
          num=num/10;
          sum=sum*10+p;
     }
     if(n==sum)
     {
     printf("Number is pelidrome");
     }
     else
     {
     printf("Number is not pelidrome");
     }
}