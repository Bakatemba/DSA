#include <stdio.h>
#include <stdlib.h>

int main() {
    int dom, wild, i;


    printf("Enter the number of domestic animals: ");
    scanf("%d", &dom);
    getchar();


    char domesticanimals[dom][50];
    printf("Enter the names of %d domestic animals:\n", dom);


    for (i = 0; i < dom; i++) {
        printf("Domestic animal %d: ", i + 1);
        fgets(domesticanimals[i], 50, stdin);
    }


    printf("\nDomestic Animals:\n");
    for (i = 0; i < dom; i++) {
        printf("%s", domesticanimals[i]);
    }


    printf("Enter the number of wild animals: ");
    scanf("%d", &wild);
    getchar();

    char wildanimals[wild][50];
    printf("Enter the names of %d wild animals:\n", wild);


    for (i = 0; i < wild; i++) {
        printf("Wild animal %d: ", i + 1);
        fgets(wildanimals[i], 50, stdin);
    }
    printf("\nWild Animals:\n");
    for (i = 0; i < wild; i++) {
        printf("%s", wildanimals[i]);
    }


    printf("\nAll Animals:\n");

    for (i = 0; i < dom; i++) {
        printf("%s", domesticanimals[i]);
    }

    for (i = 0; i < wild; i++) {
        printf("%s", wildanimals[i]);
    }

    return 0;
}
