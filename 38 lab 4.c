#include<stdio.h>
//Printing 1,4,9,16.........N
int main()
{
     int n,i;
     printf("Enter number of turm you want to ptint\n");
     scanf("%d",&n);
     for(i=1;i<=n;i++)
     {
     	printf("%d  ",i*i);
	 }   
}
