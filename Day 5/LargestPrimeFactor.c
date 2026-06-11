#include<stdio.h>
int main()
{
    int a, i;
    int LPF=0;
     
    printf("Enter a number; ");
    scanf("%d",&a );

    int oriNum= a;
    i= 2;

    while(a> 1){
        if(a % i == 0){
            LPF= i;
            a= a / i;
        }
        else{
            i++;
        }

    }
    printf(" The largest prime factor of %d is: %d\n",a,LPF);
    return 0;
}

