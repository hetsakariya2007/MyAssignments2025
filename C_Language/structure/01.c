#include <stdio.h>
struct Book {
    char title[20];
    char author[30];
    float price;
};

int main()
{
    struct Book b1;
    
    printf("Enter book name here :\n");
    scanf("%s",&b1.title);
    printf("Enter author name here :\n");
    scanf("%s",&b1.author);
    printf("Enter book price here :\n");
    scanf("%f",&b1.price);

    printf("\n");
    printf("--Book Details--\n\n");
    printf("Name : %s \n", b1.title);
    printf("Author : %s \n", b1.author);
    printf("Price : %.2f\n",b1.price);
    

    return 0;
}