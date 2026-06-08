#include<stdio.h>
int main()
{
    int a, rem, product= 1;

    printf("Enter a number= ");
    scanf("%d",&a);

    if(a == 0)
    {
        product = 0;
    }
     while(a != 0)
     {
        rem= a % 10;
        product= product * rem;
        a= a / 10;
     }
     printf("Product of digits = %d\n",product);
     return 0;

}