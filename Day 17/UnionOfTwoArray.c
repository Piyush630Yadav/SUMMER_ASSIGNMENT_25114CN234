#include<stdio.h>
int main()
{
    int x, y, i, j, found;
    int a[50], b[50];

    printf("Enter size of first array: ");
    scanf("%d",&x);

    printf("Enter elements: ");
    for(i= 0; i < x; i++)
    scanf("%d",&a[i]);

    printf("Enter size of second array: ");
    scanf("&d",&b[i]);

    printf("Enter elements: ");
    for (i= 0; i < y; i++)
    scanf("%d",&b[i]);

    printf("union: ");

    for(i= 0; i < x; i++)
    printf("%d",a[i]);

    for(i= 0; i < y; i++){
        found= 0;
        for(j = 0; j < x; j++){
            if(b[i] == a[j]){
                found = 1;
                break;
            }
        }
        if(found == 0)
        printf("%d",b[i]);
    }
    return 0;
}