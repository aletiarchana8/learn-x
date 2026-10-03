#include <stdio.h>

int main()
{
    FILE *fp;
    int i, age, roll_no;
    char name[30], course[30];
    float marks;

    fp = fopen("student_info.txt", "w");

    if(fp == NULL)
    {
        printf("File cannot be opened\n");
        return 1;
    }

    for(i = 1; i <= 5; i++)
    {
        printf("\nEnter details of Student %d\n", i);

        printf("Enter Name: ");
        scanf("%s", name);

        printf("Enter Age: ");
        scanf("%d", &age);

        printf("Enter Course: ");
        scanf("%s", course);

        printf("Enter Roll No: ");
        scanf("%d", &roll_no);

        printf("Enter Marks: ");
        scanf("%f", &marks);

        fprintf(fp, "Name: %s\n", name);
        fprintf(fp, "Age: %d\n", age);
        fprintf(fp, "Course: %s\n", course);
        fprintf(fp, "Roll No: %d\n", roll_no);
        fprintf(fp, "Marks: %.2f\n\n", marks);
    }

    fclose(fp);

    printf("\nStudent details saved in student_info.txt\n");

    return 0;
}
