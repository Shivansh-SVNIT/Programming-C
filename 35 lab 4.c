#include<stdio.h>
//sum of the digits of given number till 1 digit

int digit(int num);
int main()

{
     int x;
     printf("Enter Number");
     scanf("%d",&x);
     if(x>9)
     {
          int p=digit(x);
          printf("%d",p);
     }
     else
     {
          printf("%d",x);
     }
     
}

int digit(int num)
{
     int sum=0,p;
     while(num>0)
     {
          p=num%10;
          num=num/10;
          sum=sum+p;
     }
     if(sum>9)
     {
          sum=digit(sum);
     }
     return sum;
}