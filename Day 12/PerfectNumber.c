#include<stdio.h>

int perfect(int a){
    if (a <= 1){
        return 0;
    }
    int sum= 1;

    for(int i= 2; i * i <= a; i++){
        if(a % i == 0){
            sum +=i;

            if(i * i != a){
                sum += a/ i;
            }
        }
    }
    if(sum == a){
        return 1;
    } else{
        return 0;
    }
}
int main(){
    int x;

    printf("Enter a number: ");
    scanf("%d",&x);

    if(perfect(x)){
        printf("%d is a perfect number.\n",x);
    } else{
        printf("%d is not a perfect number.\n",x);
    }
    return 0;
}