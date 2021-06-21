#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

typedef struct {

    int id;
    char name[40];
    bool is_teacher;
    float score;
    int id_type;
    union {
        int id_teacher;
        int id_student;
    }tp;
} school;

void updateCourse(school *cs);
void displayCourse(school cs);
void runProgram();
int getIdType(school cs);
void updateIdType(school *cs, int id);

int main()
{
    runProgram();
    return 0;
}

void runProgram(){
    int un;
    school cs2;
    updateCourse(&cs2);
    un = getIdType(cs2);
    updateIdType(&cs2, un);
    if(un){
        cs2.tp.id_teacher = 12;
    }
    displayCourse(cs2);
}

void updateCourse(school *cs){
    cs -> id = 1;
    strcpy(cs -> name, "Curso de C");
    cs -> is_teacher = true;
    cs -> score = 7.28;
}

void displayCourse(school cs){
    printf("id: %d\nCourse name: %s\nIs teacher: %s\nScore: %4.2f\nid_type: %d\nid_teacher: %d", cs.id, cs.name, cs.is_teacher ? "True" : "False", cs.score, cs.id_type, cs.tp.id_teacher);
}

int getIdType(school cs){
    int id;
    id = cs.is_teacher ? 1 : 0;
    return id;
}

void updateIdType(school *cs,int id){
    cs -> id_type = id;
}
