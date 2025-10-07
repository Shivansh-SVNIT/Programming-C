#include<stdio.h>
//identifying nagative number
int main()
{
    int n,sum=0;
    printf("Enter number\n");
	scanf("%d",&n);
    if(n<0)
    {
    	printf("you entered the nagative value\n");
    	printf("sum is %d",n);
	}
	else
	{	 
	    do
 	    {
    		printf("Enter number\n");
 	 	  	scanf("%d",&n);
    		sum=sum+n;
	 	}while(n>=0);
		printf("you entered the nagative value\n");
		printf("sum is %d",n+sum);
    }
}
