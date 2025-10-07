#include<stdio.h>
int main()
/* printing

     *
    **
   ***
  ****
 *****
 
 */
{
	int r,p,q;
	for(r=1;r<=5;r++)
	{
		for(p=1;p<=6-r;p++)
		{
			printf(" ");
		}
		
		for(q=1;q<=r;q++)
		{
			printf("*");
		}
		printf("\n");
	}
}
