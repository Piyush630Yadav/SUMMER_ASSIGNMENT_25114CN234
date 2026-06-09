#include<stdio.h>
int main()
{
    int a= 50, b=21;
    int x=a, y=b;

    while(y != 0)
    {
        int temp =y;
        y= x % y;
        x= temp;
    }
    printf("The GCD of %d and%d is: %d\n",a, b, x);
    return 0;
}