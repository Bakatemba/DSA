#include <stdio.h>
#include <stdlib.h>

int main(){

    int n,x;
printf("Enter the number of domestic animals ");
scanf("%d",&n);
printf("Enter the number of wild animals ");
scanf("%d",&x);
  char Domestic[n][6];
char Wild[x][6];
char Merged[n+x][13];
    int i,j;
// Prompting the user to enter the Domestic animals.
printf("Please Enter the Domestic animals");
printf("\n");
for(int i =0;i<n;i++){
    scanf("%s",&Domestic[i]);
}
// Prompting the user to enter the Wild animals.
printf("\n\n");
printf("Please enter the Wild animals");
printf("\n");
for( j =0;j<x;j++){
    scanf("%s",&Wild[j]);
}
//printf("\n\n");
// Copying Domestic animals into merged array.
for (int i =0;i<n+x;i++){
    strcpy(Merged[i],Domestic[i]);
}
// Copying wild animals into merged array.
     printf("\n");
for (int j=0;j<n+x;j++){
    strcpy(Merged[n+j],Wild[j]);
}
// Printing Merged array
     printf("\n");
for (int i = 0;i<n+x;i++){
printf("%s\n",Merged[i]);}
return 0;
}
