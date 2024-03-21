// Basic structure program in C

#include <stdio.h>

int main()
{
    struct student
    {
        char name[20];
        int roll;
    };

    struct student s1;
    printf("Enter name and roll number: ");
    scanf("%s%d", s1.name, &s1.roll);
    printf("Name: %s\nRoll number: %d\n", s1.name, s1.roll);

    return 0;
}