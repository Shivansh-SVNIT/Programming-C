#include<stdio.h>
#include<math.h>
//finding value of function
int main()
{
	int n,x,y;
	printf("Enter number n \n");
    scanf("%d",&n);
    printf("Enter number x \n");
    scanf("%d",&x);
    if(n==1)
    {
    	y=x+1;
	}
	if(n==2)
    {
    	y=x/2+1;
	}
	if(n==3)
    {
    	y=pow(x,3) +1;
	}
	if(n>3 || n<1)
    {
    	y=1+n*x;
	}
    printf("value of Y  is %d",y);
}

