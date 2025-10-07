#include<stdio.h>
//Printing 1/1!+2/2!+3/3!+4/4!.........N
int main()
{
     int n,i,r;
	 float sum=0,fac;
     printf("Enter number of turm you want to ptint\n");
     scanf("%d",&n);
     for(r=1;r<=n;r++)
     {
     	fac=1;
     	for(i=1;i<=r;i++)
    	{
    	 	fac=fac*i;
		}
		sum=sum+(r/fac);
     }
     printf("sum of the series %f",sum);
}
