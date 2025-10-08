#include<stdio.h>
//selection sorting 
int main()
{
     int i,j,a[5],jtemp,temp,x;
     printf("Enter array elements\n");
     for(i=0;i<5;i++)
     {
          scanf("%d",&a[i]);
     }
     
     for(i=0;i<=4;i++)
     {
          x=a[i];
          for(j=i;j<=3;j++)
          {
               if(x>a[j+1])
               {
                    jtemp=j;
                    x=a[j+1];
               }
          }
          temp=a[i];
          a[i]=x;
          a[jtemp+1]=temp;
     }
     
     printf("Sorted array is\n");
     for(i=0;i<5;i++)
     {
          printf("%d  ",a[i]);
     }
     
}