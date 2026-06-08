#include<stdio.h>
int main()
{
    int a;
     printf("Enter a number:");
     scanf("%d",&a);

     printf("Multiplication table of %d is:%d\n",a);

     for(int i=1; i <=10;i++){

        printf("%d*%d = %d\n", a,i,a*i);
     }
     return 0;
}