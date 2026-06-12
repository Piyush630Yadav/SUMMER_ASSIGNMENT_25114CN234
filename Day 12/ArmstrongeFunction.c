#include<stdio.h>
 int isArmstronge(int a){
    int oriNum= a;
    int rem;
    int result= 0;

    while (oriNum != 0)
    {
        rem= oriNum % 10;

        result += rem * rem * rem;
        oriNum /= 10;
    }
    return(result == a);
 }
 int main(){
    int x;

    printf("Enter a number: ");
    scanf("%d", &x);

    if(isArmstronge(x)){
        printf("%d is an armstronge number.\n",x);
    } else{
        printf("%d is not an armstronge number.\n",x);
    }
    return 0;
 }