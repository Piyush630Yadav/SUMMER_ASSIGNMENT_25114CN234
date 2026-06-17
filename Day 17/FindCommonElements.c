#include<stdio.h>
int main()
{
    int x, y, i, j;

    printf("Enter size of first array: ");
    scanf("%d",&x);
    int a[x];

    printf("Enter elements: ");
    for(i = 0; i < x; i++)
    scanf("%d",&a[i]);

    printf("Enter size os second array: ");
    scanf("%d",&y);
    int b[y];

    printf("Enter elements: ");
    for(i = 0; i < y; i++)
    scanf("%d",&b[i]);

    printf("Common Elements: ");

    for(i= 0; i < x; i++){
        for(j= 0; j < y; j++){
            if(a[i] == b[j])
            printf("%d",a[i]);
        }
    }
    return 0;
}