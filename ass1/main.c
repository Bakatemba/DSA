#include <stdio.h>
#include <stdlib.h>

void Compilationof_Results() {
    int n;
    printf("Please enter the number of subjects you would wish to enter marks for:");
    printf("\n");
   while( scanf("%d",&n) != 1){
    printf("Invalid Input ,The number is supposed to be an integer\n Please re-enter the number\n");
    while(getchar()!='\n');
   }
    int Marks [n][4]; // 3 subjects, 4 marks per subject
    double sum, average;

    char subjects_names[n][20]; // Array to store subject names

    // Input subject names
    printf("Enter names of  subjects:\n");
    for (int i = 0; i < n; i++) {
        printf("Subject %d: ", i + 1);
        scanf(" %[^\n]", subjects_names[i]);
    }

    // Enter marks for each subject
    for (int k = 0; k < n; k++) {
        sum = 0; // Reset sum for each subject

        printf("\nEnter marks for %s (Asg, CW, MID, EOT):\n", subjects_names[k]);
        for (int j = 0; j < 4; j++) {
                while(1){
           while( scanf("%d", &Marks[k][j]) !=1){
            printf("Invalid input The mark is supposed to be an integer\n Please re-enter the mark\n");
            while(getchar()!='\n');
           }
            if(Marks[k][j]>=0&&Marks[k][j]<=100){
                break;
            }else{
             printf("Invalid Input The Mark is Supposed to be between 0 and 100\n Please re-enter the mark\n ");}


        }
         sum += Marks[k][j]; // Sum up the marks
        }

        average = sum / 4;
        printf("\nMarks for %s:\n", subjects_names[k]);
        printf("Asg\t CW\t MID\t EOT\n");
        // Printing the marks;
        for (int j = 0; j < 4; j++) {
            printf("%d\t", Marks[k][j]);
        }

        printf("\nSum: %.0lf", sum);
        printf("\nAverage: %.2lf\n", average);
    }
}

int main() {
    Compilationof_Results();
    return 0;
}
