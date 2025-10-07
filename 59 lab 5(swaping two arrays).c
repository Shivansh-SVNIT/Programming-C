#include<stdio.h>
/*
swaping two arrays
*/
int main()
{
     int A1[10],A2[10],i,temp;
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
          temp=A1[i];
          A1[i]=A2[i];
          A2[i]=temp;
     }
     printf("\n new elements of array 1 is\n");
     for(i=0;i<10;i++)
     {
          printf("%d  ",A1[i]);
     }
     printf("\n new elements of array 2 is\n");
     for(i=0;i<10;i++)
     {
          printf("%d  ",A2[i]);
     }
}
     