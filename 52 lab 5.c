#include<stdio.h>
int main()
/* printing

    1
   121
  12321
 1234321
123454321

 */
{
	int r,n ;
	for(r=1;r<=5;r++)
    {
         for(n=1;n<=5-r ;n++)
         {
              printf(" ");
         }
         for(n=1;n<=r ;n++)
         {
              printf("%d",n);
         }
         for(n=1;n<=r-1 ;n++)
         {
              printf("%d",r-n);
         }
         
    printf("\n");   
    }
}    
     