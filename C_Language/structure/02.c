#include <stdio.h>
struct Book {
    int rollNo;
    char name[30];
    float marks;
};

int main()
{
    struct Book b1[5];
    
    printf("Enter rollNo here :\n");
    scanf("%d",&b1[0].rollNo);
    printf("Enter name here :\n");
    scanf("%s",&b1[0].name);
    printf("Enter marks here :\n");
    scanf("%f",&b1[0].marks);

    printf("\n");
    printf("--Student-1 Details--\n\n");
    printf("rollNo : %d \n", b1[0].rollNo);
    printf("name   : %s \n", b1[0].name);
    printf("marks  : %.2f\n\n",b1[0].marks);
    
    printf("------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("Enter rollNo here :\n");
    scanf("%d",&b1[1].rollNo);
    printf("Enter name here :\n");
    scanf("%s",&b1[1].name);
    printf("Enter marks here :\n");
    scanf("%f",&b1[1].marks);

    printf("\n");
    printf("--Student-2 Details--\n\n");
    printf("rollNo : %d \n", b1[1].rollNo);
    printf("name   : %s \n", b1[1].name);
    printf("marks  : %.2f\n\n",b1[1].marks);
    
    printf("------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("Enter rollNo here :\n");
    scanf("%d",&b1[2].rollNo);
    printf("Enter name here :\n");
    scanf("%s",&b1[2].name);
    printf("Enter marks here :\n");
    scanf("%f",&b1[2].marks);

    printf("\n");
    printf("--Student-3 Details--\n\n");
    printf("rollNo : %d \n", b1[2].rollNo);
    printf("name   : %s \n", b1[2].name);
    printf("marks  : %.2f\n\n",b1[2].marks);
    
    printf("------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("Enter rollNo here :\n");
    scanf("%d",&b1[3].rollNo);
    printf("Enter name here :\n");
    scanf("%s",&b1[3].name);
    printf("Enter marks here :\n");
    scanf("%f",&b1[3].marks);

    printf("\n");
    printf("--Student-4 Details-\n\n");
    printf("rollNo : %d \n", b1[3].rollNo);
    printf("name   : %s \n", b1[3].name);
    printf("marks  : %.2f\n\n",b1[3].marks);
    
    printf("------------------------------------------------------------------------------------------------------------------------------\n\n");

    printf("Enter rollNo here :\n");
    scanf("%d",&b1[4].rollNo);
    printf("Enter name here :\n");
    scanf("%s",&b1[4].name);
    printf("Enter marks here :\n");
    scanf("%f",&b1[4].marks);

    printf("\n");
    printf("--Student-5 Details--\n\n");
    printf("rollNo : %d \n", b1[4].rollNo);
    printf("name   : %s \n", b1[4].name);
    printf("marks  : %.2f\n\n",b1[1].marks);


    return 0;
}