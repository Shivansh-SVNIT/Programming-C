#include<stdio.h>
// table of any number
int main()
{
	int x,y,i;
    printf("Enter number x \n");
    scanf("%d",&x);
    for(i=1;i<11;i++)
    {
    	y=x*i;
    	printf("%d\n",y);
	}
}

