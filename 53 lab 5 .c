#include<stdio.h>
/*
      *
     * *
    * * *
   * * * *
  * * * * *
*/
int main()
{
     int i,r;
     for(r=1;r<=5;r++)
     {
          for(i=1;i<=6-r;i++)
          {
               printf(" ");
          }
          for(i=1;i<=r;i++)
          {
               printf("* ");
          }
          printf("\n");
     }
}
     