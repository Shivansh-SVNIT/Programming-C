#include<stdio.h>
/*
sum of two arrays
*/
int main()
{
     int A1[10],A2[10],A3[10],i;
     printf("inter elements array 1\n");
     for(i=0;i<10;i++)
     {
          scanf("%d",&A1[i]);
     }
     printf("inter elements array 2\n");
     for(i=0;i<10;i++)
     {
          scanf("%d",&A2[i]);
     }
     for(i=0;i<10;i++)
     {
          A3[i]=A1[i]+A2[i];
     }
     printf("\nsum of array 1 array 2 is\n");
     for(i=0;i<10;i++)
     {
          printf("%d  ",A3[i]);
     }
}
     