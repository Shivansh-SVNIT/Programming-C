#include<stdio.h>
int main()
/* printing

A
BB
CCC
DDDD
EEEEE

 */
{
	int r,n ;
	for(r=1;r<=5;r++)
    {
         for(n=1;n<=r ;n++)
         {
              printf("%c",64+r);
         }
    printf("\n");   
    }
}    
     