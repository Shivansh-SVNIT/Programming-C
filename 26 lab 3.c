#include<stdio.h>
// sum of odd and even numbers
int main()
{
	int sumO=0,sumE=0,n,i;
    printf("Enter number N \n");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+2)
    {
    	sumO=sumO+i;
	}
	for(i=2;i<=n;i=i+2)
    {
    	sumE=sumE+i;
	}
	printf("sum of odd is %d and even is %d",sumO,sumE);
}

