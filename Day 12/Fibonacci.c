#include<stdio.h>

int getFibo(int n){
    if(n <= 1){
        return 0;
    }
    if(n == 2){
        return 1;
    }
    int a= 0;
    int b= 1;
    int new= 0;

    for(int i= 3; i <= n; i++){
        new= a + b;
        a= b;
        b= new;
    }
    return b;
}
int main(){
    int terms;
     
    printf("Enter the number of terms: ");
    scanf("%d",&terms);

    printf("Fibonacci Series: ");
    for(int i= 1; i <= terms; i++){
        printf("%d",getFibo(i));
    }
    printf("\n");

    return 0;
}