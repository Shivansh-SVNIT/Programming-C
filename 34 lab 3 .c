#include<stdio.h>
//printing Fibonacci series
int main()
{
     int n,n1=0,n2=1,sum;
     printf("Enter number of terms\n");
     scanf("%d",&n);
     while(n>0)
     {
          n=n-1;
          printf(" %d ",n1);
          sum=n1+n2;
          n1=n2;
          n2=sum;
     }
}