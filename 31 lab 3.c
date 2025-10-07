#include<stdio.h>
//sum of the digits of given number
int main()
{
     int num,sum=0,p;
     printf("Enter number\n");
     scanf("%d",&num);
     while(num>0)
     {
          p=num%10;
          num=num/10;
          sum=sum+p;
     }
     
     printf("sum of digits of Your number is %d",sum);
}