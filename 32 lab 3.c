#include<stdio.h>
//Finding Biggest Number and second biggest number amoung N numbers
int main()
{
     float a,b,x,y,t=0,p;
     printf("Enter first number\n");
     scanf("%f",&a);
     printf("Enter second number\n");
     scanf("%f",&b);
     
     while(t==0)
     {
          x=(a>=b)?a:b;
          
          if(x==a)
          {
          	p=b;
		  }
		  else
		  {
		  	p=a;
		  }
		  
          printf("Biggest Number is %f\n",x);
          printf("second biggest number is %f",p);
          
          printf("\n");
          printf("\n");
          printf("Enter Next number\n");
          scanf("%f",&y);
          printf("\n");
          a=x;
          b=y;
     }
}
    
