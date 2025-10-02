#include <stdio.h>

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    int id;
    char name[100];
    struct Date joiningDate;  
};

int main() {
    struct Employee e1;

    printf("Enter employee iD: ");
    scanf("%d", &e1.id);

    printf("Enter mployee name: ");
    scanf("%s", e1.name);  

    printf("Enter Joining Date (day month year): ");
    scanf("%d %d %d", &e1.joiningDate.day, &e1.joiningDate.month, &e1.joiningDate.year);


    printf("\n---Employee Details---\n\n");
    printf("ID       : %d\n", e1.id);
    printf("Name     : %s\n", e1.name);
    printf("Joining Date: %02d-%02d-%04d\n", e1.joiningDate.day, e1.joiningDate.month, e1.joiningDate.year);

    return 0;
}
