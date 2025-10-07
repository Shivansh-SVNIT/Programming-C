#include<stdio.h>
// number is prime or not
int main()
{
	int n,flag=0,i,p;
    printf("Enter number N \n");
    scanf("%d",&n);
    for(i=2;i<n;i++)
    {
    	p=n%i;
    	if(p==0)
    	{
    		flag=1;
    		break;
		}
	}
	if(flag==0)
	{
		printf("prime number");
	}
	else
	{
		printf("not a prime number");
	}
}

