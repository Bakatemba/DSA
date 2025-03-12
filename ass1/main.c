#include <stdio.h>
#include <stdlib.h>

//Physics//
void Physics(){
     int ass;
     printf("Enter the results for your assignment:");
     scanf("%d",&ass);

     int cw;
     printf("Enter the results for your course work:");
     scanf("%d",&cw);

     int mt;
     printf("Enter the results for your midterms:");
     scanf("%d",&mt);

     int et;
     printf("Enter the results for your end of term:");
     scanf("%d",&et);

     int sum = et+mt+cw+ass;
     float avg= sum/4;

     printf("Total marks:%d\nAverage marks:%f",sum,avg);
}
//CHEMISTRY//
void Chemistry(){
     int ass;
     printf("Enter the results for your assignment:");
     scanf("%d",&ass);

     int cw;
     printf("Enter the results for your course work:");
     scanf("%d",&cw);

     int mt;
     printf("Enter the results for your midterms:");
     scanf("%d",&mt);

     int et;
     printf("Enter the results for your end of term:");
     scanf("%d",&et);

     int sum = et+mt+cw+ass;
     float avg= sum/4;

     printf("Total marks:%d\nAverage marks:%f",sum,avg);
}
//MATH//
void math(){
     int ass;
     printf("Enter the results for your assignment:");
     scanf("%d",&ass);

     int cw;
     printf("Enter the results for your course work:");
     scanf("%d",&cw);

     int mt;
     printf("Enter the results for your midterms:");
     scanf("%d",&mt);

     int et;
     printf("Enter the results for your end of term:");
     scanf("%d",&et);

     int sum = et+mt+cw+ass;
     float avg= sum/4;

     printf("Total marks:%d\nAverage marks:%f",sum,avg);
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
