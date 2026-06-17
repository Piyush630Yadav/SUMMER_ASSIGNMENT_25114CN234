#include<stdio.h>
int main()
{
    int a, b, i;

    printf("Enter size of first array: ");
    scanf("%d", &a);

    int arr[a];

    printf("Enter elements: ");
    for(i = 0; i < a; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter size of second array: ");
    scanf("%d",&b);

    int arr2[b];

    printf("Enter elements: ");
    for(i = 0; i < b; i++){
        scanf("%d",&arr[i]);
    }
    int c[a + b];

    for(i = 0; i < a; i++)
    c[i]= arr[i];

    for(i = 0; i < b; i++ )
    c[ a + i] =arr2[i];

    printf("Merged Array: ");
    for(i = 0; i < a + b; i++)
    printf("%d", c[i]);

    return 0;

}