#include<stdio.h>
int main()
/* printing
   A
   AB
   ABC
   ABCD
   ABCDE
 */
{
	int r,n ;
	for(r=1;r<=5;r++)
    {
         for(n=1;n<=r ;n++)
         {
              printf("%c",64+n);
         }
    printf("\n");   
    }
}    
     