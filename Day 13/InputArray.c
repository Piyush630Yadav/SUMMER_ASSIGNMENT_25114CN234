#include<stdio.h>
int main()
{
    int size;

    printf("Enter the number of element: ");
    scanf("%d",&size); 

    int arr[size];

    printf("Enter %d integer: \n",size);
    for(int i= 0; i < size; i++)
    {
     printf("Element %d: ",i + 1);
     scanf("%d",&arr[i]);
    }
    printf("\n The element in the array are:\n");
    for(int i= 0; i < size; i++){
        printf("%d",arr[i]);
    }
    printf("\n");
    return 0;

}