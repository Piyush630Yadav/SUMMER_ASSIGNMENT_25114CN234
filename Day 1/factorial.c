#include<stdio.h>
int main()
{
     int a,i,fact=1;
      
     printf("Enter the number=");
     scanf("%d",&a);

     i=1;
     while(i<=a)
     {
        fact=fact*i;
        i++;
     }
     printf("Factorial of %d is %d",a,fact);
     return 0;

}