#include <stdio.h>
int main(){

//Im presenting the variables for the project.

    char State;
char code[50];
char name[50];
int population;
float area;
float PIB;
int spots;

//setting the questions for Card A.

printf("What is the state A?:\n ");
scanf(" %c" , &State);

printf("What is the name A?:\n ");
scanf("%s" , name);

printf("What is the code A?:\n ");
scanf("%s" , code);


printf("What is the population A?:\n ");
scanf("%i" , &population);

printf("What is the area A?:\n ");
scanf("%f" , &area);

printf("What is the PIB A?:\n ");
scanf("%f" , &PIB);

printf("What is the spots A?\n" );
scanf(" %d" , &spots);

//setting the questions for Card B.

printf("What is the state B?:\n ");
scanf(" %c" , &State);

printf("What is the name B?:\n ");
scanf("%s" , name);

printf("What is the code B?:\n ");
scanf("%s" , code);

printf("What is the population B?:\n ");
scanf("%i" , &population);

printf("What is the area B?:\n ");
scanf("%f" , &area);

printf("What is the PIB B?:\n ");
scanf("%f" , &PIB);

printf("What is the spots B?\n" );
scanf(" %d" , &spots);

//printing results for card A

printf("The State for Card A is: %c\n" , State);
printf("The Name for Card A is: %s\n" , name);
printf("The Code for Card A is: %s\n" , code);
printf("The Population for Card A is: %d\n" , population);
printf("The Area for Card A is: %f\n" , area);
printf("The PIB for Card A is: %f\n" , PIB);
printf("The Spots for Card A is: %d\n\n" , spots);

//printing results for card B

printf("The State for Card B is: %c\n" , State);
printf("The Name for Card B is: %s\n" , name);
printf("The Code for Card B is: %s\n" , code);
printf("The Population for Card B is: %d\n" , population);
printf("The Area for Card B is: %f\n" , area);
printf("The PIB for Card B is: %f\n" , PIB);
printf("The Spots for Card B is: %d\n" , spots);




return 0;



}