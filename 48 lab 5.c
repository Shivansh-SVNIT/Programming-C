#include<stdio.h>
/*
printing    
                1
               12   
              123
             1234
            12345
*/
int main()
{
	int r,p,q;
	for(r=1;r<=5;r++)
	{
		for(p=1;p<=5-r;p++)
		{
			printf(" ");
		}
		
		for(q=1;q<=r;q++)
		{
			printf("%d",q);
		}
		printf("\n");
	}
}
