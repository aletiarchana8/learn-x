#include <stdio.h>

int main()
{
    FILE *fp;
    char ch;

    fp = fopen("student_data.bin", "rb");

    if(fp == NULL)
    {
        printf("File cannot be opened\n");
        return 1;
    }

    while((ch = fgetc(fp)) != EOF)
    {
        printf("%c", ch);
    }

    fclose(fp);

    return 0;
}                  
