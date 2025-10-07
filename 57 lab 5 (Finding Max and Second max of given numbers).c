#include<stdio.h>
/*
Finding Max and Second max of given numbers
*/
int main()
{
     int n,i,x,y,z;
     printf("Enter number of numbers  ");
     scanf("%d",&n);
     
     int set[n];
     printf("Enter Elements\n");
     for(i=0;i<n;i++)
     {
          scanf("%d",&set[i]);
     }
     printf("\n");
     x=set[0];
     y=set[1];
     i=2;
     while(i<n)
     {
          z=set[i];
          x=(x>y)?((x>z)?x:z):((y>z)?y:z);
          y=(y>z)?z:y;
          i++;
     }
     printf("greatest number is %d\n",x);
     printf("second greatest number is %d",y);
     
}
     