#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fpointer = fopen("text.txt", "r");

    char line[255];
    char name[20] = "Marcelo";
    int age = 33;
    int * pAge = &age;

    fprintf(fpointer, "\n%s %d", name, age);
    fgets(line, 255, fpointer);
    fgets(line, 255, fpointer);
    printf("%s", line);

    printf("%p\n", &age);
    printf("%d\n", age);
    printf("%d\n", *pAge);
    printf("%d\n", *&age);
    printf("%d\n", &*&age);

    fclose(fpointer);
    return 0;
}
