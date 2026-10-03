#include <stdio.h>

struct Employee
{
    int employee_id;
    char name[30];
    int age;
    char dob[11];
};

int main()
{
    FILE *fp;
    struct Employee e;
    int i;

    fp = fopen("student_data.bin", "wb");

    if(fp == NULL)
    {
        printf("File cannot be opened\n");
        return 1;
    }

    for(i = 1; i <= 5; i++)
    {
        printf("\nEnter details of Employee %d\n", i);

        printf("Employee ID: ");
        scanf("%d", &e.employee_id);

        printf("Name: ");
        scanf("%s", e.name);

        printf("Age: ");
        scanf("%d", &e.age);

        printf("Date of Birth (dd-mm-yyyy): ");
        scanf("%s", e.dob);

        fwrite(&e, sizeof(e), 1, fp);
    }

    fclose(fp);

    printf("\nEmployee details successfully written to student_data.bin\n");

    return 0;
}
