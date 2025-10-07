#include<stdio.h>
//Finding Biggest Number anf second biggest number amoung N numbers
int main()
{
     float a,b,x,y,t=0,p;
     printf("Enter first number\n");
     scanf("%f",&a);
     printf("Enter second number\n");
     scanf("%f",&b);
     float a2=a,b2=b;
     float x2;
     
     while(t==0) 
     {
          x=(a>=b)?a:b;
          x2=(a2>=b2)?b2:a2;
		  
          printf("Biggest Number is %f\n",x);
          printf("smallest Number is %f\n",x2);
          
          printf("\n");
          printf("\n");
          printf("Enter Next number\n");
          scanf("%f",&y);
          printf("\n");
          a=x;
          b=y;
          a2=x2;
          b2=y;
     }
}
    
