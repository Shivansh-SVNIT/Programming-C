#include<stdio.h>
//Entered number is prime or composide
int main()
{
    int n,i,j=0,flag;
    printf("Enter number\n");
	scanf("%d",&n);
    for(j=2;j<=n/2;j++)
    {
    	flag=0;
    	if(n%j==0)
    	{
    		flag=1;
    		break;
		}
	}
		
	if(flag==0)
	{
		printf("number is prime %d",n);
	}
    else
    {
        printf("number is composide %d",n);
    }
	
}
