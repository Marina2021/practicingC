#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main() {

    // int year = 2025;
    // printf("The year is %d\n", year);
    // int quantity = 20;
    // printf("You have bought %d items\n", quantity);

    // double pi = 3.14159265358979;
    // printf("The value of pi is %.16lf\n", pi);

    // bool isOnline = true;
    // if(isOnline){
    //        printf("You are ONLINE\n"); 
    //  } else {
    //      printf("You are OFFLINE\n");
    //  }
 

    int age = 0;
    float gpa = 0.0f;
    char grade = '\0';
    char name[30] = "";

    printf("How old are you? ");
    scanf("%d", &age);

    printf("What is your gpa? ");
    scanf("%f", &gpa);
    
    printf("What is your grade? ");
    scanf(" %c", &grade);
    
    getchar();
    printf("What is your full name? ");
    fgets(name, sizeof(name), stdin);
    name[strlen(name) - 1] = '\0';

    printf("Your name is %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your gpa is %.2f\n", gpa);
    printf ("Your grade is %c\n", grade);
   


    return 0;

}