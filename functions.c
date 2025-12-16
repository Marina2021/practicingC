#include <stdio.h>
#include <string.h>

void happyBirthdaySong(char jmeno[], int vek){
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday to you!");
    printf("\nHappy Birthday dear %s!", jmeno);
    printf("\nHappy Birthday to you!");
    printf("\nYou are %d years old now!\n", vek);
}

int main() {
// function is a reusable section of the code that can be invoked "called", 
//          arguments can be sent to a function so that it can use them

char name[50] = "";
int age = 0;

printf("What is your name? ");
fgets(name, sizeof(name), stdin);
name[strlen(name) - 1] = '\0';

printf("How old are you? ");
scanf("%d", &age);

happyBirthdaySong(name, age);
happyBirthdaySong(name, age);
happyBirthdaySong(name, age);

return 0;

}