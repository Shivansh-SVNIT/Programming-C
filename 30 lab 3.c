#include<stdio.h>
// reverse of given number 
int main()
{
     int num,sum=0,p;
     printf("Enter number\n");
     scanf("%d",&num);
     while(num>0)
     {
          p=num%10;
          num=num/10;
          sum=sum*10+p;
     }
     
     printf("Your reverse number is %d",sum);
}