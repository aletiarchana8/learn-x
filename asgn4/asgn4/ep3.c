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

    fp = fopen("student_data.bin", "rb");

    if(fp == NULL)
    {
        printf("File cannot be opened\n");
        return 1;
    }

    printf("Employees whose age is above 35:\n");

    while(fread(&e, sizeof(e), 1, fp) == 1)
    {
        if(e.age > 35)
        {
            printf("%s\n", e.name);
        }
    }

    fclose(fp);

    return 0;
}
