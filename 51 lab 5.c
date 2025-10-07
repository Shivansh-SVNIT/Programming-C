#include<stdio.h>
int main()
/* printing

10000
01000
00100
00010
00001

 */
{
	int r,n ;
	for(r=1;r<=5;r++)
    {
         for(n=1;n<=r-1 ;n++)
         {
              printf("0");
         }
         printf("1");
         for(n=1;n<=5-r ;n++)
         {
              printf("0");
         }
    printf("\n");   
    }
}    
     