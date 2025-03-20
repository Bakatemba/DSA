#include <stdio.h>
#include <stdlib.h>

//Physics//
void Physics(){

    int ass, cw, mt, et;

    printf("Enter the results for your assignment: ");
    scanf("%d", &ass);
    while (ass > 100 || ass < 0) {
        printf("Marks should be between 0 and 100!\n");
        printf("Enter the results for your assignment: ");
        scanf("%d", &ass);
    }

    printf("Enter the results for your course work: ");
    scanf("%d", &cw);
    while (cw > 100 || cw < 0) {
        printf("Marks should be between 0 and 100!\n");
        printf("Enter the results for your course work: ");
        scanf("%d", &cw);
    }

    printf("Enter the results for your midterms: ");
    scanf("%d", &mt);
    while (mt > 100 || mt < 0) {
        printf("Marks should be between 0 and 100!\n");
        printf("Enter the results for your midterms: ");
        scanf("%d", &mt);
    }

    printf("Enter the results for your end of term: ");
    scanf("%d", &et);
    while (et > 100 || et < 0) {
        printf("Marks should be between 0 and 100!\n");
        printf("Enter the results for your end of term: ");
        scanf("%d", &et);
    }

    int sum = et + mt + cw + ass;
    float avg = sum / 4.0;

    printf("Total marks: %d\nAverage marks: %.2f\n", sum, avg);
}
//CHEMISTRY//
void Chemistry(){
     int ass, cw, mt, et;

    printf("Enter the results for your assignment: ");
    scanf("%d", &ass);
    while (ass > 100 || ass < 0) {
        printf("Marks should be between 0 and 100!\n");
        printf("Enter the results for your assignment: ");
        scanf("%d", &ass);
    }

    printf("Enter the results for your course work: ");
    scanf("%d", &cw);
    while (cw > 100 || cw < 0) {
        printf("Marks should be between 0 and 100!\n");
        printf("Enter the results for your course work: ");
        scanf("%d", &cw);
    }

    printf("Enter the results for your midterms: ");
    scanf("%d", &mt);
    while (mt > 100 || mt < 0) {
        printf("Marks should be between 0 and 100!\n");
        printf("Enter the results for your midterms: ");
        scanf("%d", &mt);
    }

    printf("Enter the results for your end of term: ");
    scanf("%d", &et);
    while (et > 100 || et < 0) {
        printf("Marks should be between 0 and 100!\n");
        printf("Enter the results for your end of term: ");
        scanf("%d", &et);
    }

    int sum = et + mt + cw + ass;
    float avg = sum / 4.0;

    printf("Total marks: %d\nAverage marks: %.2f\n", sum, avg);
}

//MATH//
void math(){

      int ass, cw, mt, et;

    printf("Enter the results for your assignment: ");
    scanf("%d", &ass);
    while (ass > 100 || ass < 0) {
        printf("Marks should be between 0 and 100!\n");
        printf("Enter the results for your assignment: ");
        scanf("%d", &ass);
    }

    printf("Enter the results for your course work: ");
    scanf("%d", &cw);
    while (cw > 100 || cw < 0) {
        printf("Marks should be between 0 and 100!\n");
        printf("Enter the results for your course work: ");
        scanf("%d", &cw);
    }

    printf("Enter the results for your midterms: ");
    scanf("%d", &mt);
    while (mt > 100 || mt < 0) {
        printf("Marks should be between 0 and 100!\n");
        printf("Enter the results for your midterms: ");
        scanf("%d", &mt);
    }

    printf("Enter the results for your end of term: ");
    scanf("%d", &et);
    while (et > 100 || et < 0) {
        printf("Marks should be between 0 and 100!\n");
        printf("Enter the results for your end of term: ");
        scanf("%d", &et);
    }

    int sum = et + mt + cw + ass;
    float avg = sum / 4.0;

    printf("Total marks: %d\nAverage marks: %.2f\n", sum, avg);
}

int main()
{
    printf("Choose 1 for Physics\n");
    printf("Choose 2 for Chemistry\n");
    printf("Choose 3 for Math\n");

    int Selection=0;
    scanf("%d",&Selection);

    switch (Selection){
case 1:
    Physics();
    break;
case 2:
    Chemistry();
    break;
case 3:
    math();
    break;
default:
    printf("Invalid Input");
    break;
    }
    return 0;
}
