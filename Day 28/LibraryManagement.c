#include<stdio.h>
int main()
{
    char book[50], author[50];
    int id;

    printf("Enter Book ID: ");
    scanf("%d",&id);

    printf("Enter Book Name: ");
    scanf("%s",book);

    printf("Enter Author Name: ");
    scanf("%s",author);

    printf("\n-----Library Record-----\n");
    printf("Book ID: %d\n",id);
    printf("Book Name: %s\n ",book);
    printf("Author Name: %s\n",author);

    return 0;
}