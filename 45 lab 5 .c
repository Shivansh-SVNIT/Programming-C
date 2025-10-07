#include<stdio.h>
//Luck number machine
int main()
{
     int n,t=3;
     printf("Enter the number  ");
     scanf("%d",&n);
     t=(n>=0 && n<=9)?0:1;
     if(t==0)
     {
          for(;;)
          {
               if(n==t)
               {
                    printf("you entered luck number");
                    break;
               }
               printf("Enter next number");
               scanf("%d",&n);
               if(n>9 && n<0)
               {
                    printf("wrong input re try");
                    continue;
               }
          }     
     }
     else
     {
          printf("\nWrong input try again\n");
     }
     
}
    