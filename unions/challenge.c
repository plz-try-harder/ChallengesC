#include <stdio.h>
#include <stdlib.h>
typedef union Student{
    char letterGrade;
    int roundedGrade;
    float exactGrade;
}Student;

int main(){
    Student one, two;
    Student* three;
    three = malloc(sizeof(Student));

    three->letterGrade = 'z';
    //printf("LetterGrade : %c\n", three->letterGrade);
    three->roundedGrade = 49;
    printf("LetterGrade : %c\n", three->letterGrade);
    printf("Rounded Grade : %d\n", three->letterGrade);

    one.letterGrade = 'c';
    one.roundedGrade = 90;
    one.exactGrade=89.52;

    printf("LetterGrade : %c\n", one.letterGrade);
    printf("roundedGrade: %d\n", one.roundedGrade);
    printf("exactGrade: %f\n", one.exactGrade);

    two.letterGrade='A';
    printf("LetterGrade : %c\n", two.letterGrade);
    two.roundedGrade = 98;
    printf("roundedGrade: %d\n", two.roundedGrade);
    two.exactGrade = 97.61;
    printf("exactGrade: %f\n", two.exactGrade);
}