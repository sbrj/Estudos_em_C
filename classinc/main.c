#include <stdio.h>
#include <stdlib.h>

struct Student{
    char name[50];
    char major[50];
    int age;
    double gpa;
};

int main()
{
    struct Student student1;
    student1.age = 22;
    student1.gpa = 5.6;
    strcpy(student1.name, "Lorrana");
    strcpy(student1.major, "Programmer");

    struct Student student2;
    student2.age = 22;
    student2.gpa = 5.6;
    strcpy(student2.name, "Lorrana");
    strcpy(student2.major, "Programmer");

    printf("%f", student1.gpa);

    return 0;
}
