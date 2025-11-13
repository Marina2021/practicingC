#include <stdio.h>
#include <stdbool.h>
#include <string.h>


int main() {

    // int birthyear = 0;
    // int age = 0;
    // int currentyear = 2025;

    // printf("What is the year of your birth? \n");
    // scanf("%d", &birthyear);
    // age = currentyear - birthyear;

    // if (age > 65 && age < 120) {
    //     printf("You are a senior\n");
    // }
    // else if(age >= 18 && age < 65) {
    //     printf("You are an adult person\n");
    // }
    // else if(age >= 120) {
    //     printf("You are over biblical age, are you are most likely not alive anymore...\n");
    // }
    // else if(age < 0) {
    //     printf("You haven't been born yet\n");
    // }
    // else if(age == 0) {
    //     printf("You are a newborn\n");
    // }
    // else {
    //     printf("You are a child\n");
    // }

// bool isStudent = true;

// if (isStudent == true) {
//     printf("You are a Student\n");
// }
// else {
//     printf("You are not a Student\n");
// }



char name[50] = "";

printf("Enter your name: \n");
fgets(name, sizeof(name), stdin);
name[strlen(name) - 1] = '\0';

if(strlen(name) == 0) {
    printf("You did not enter your name\n");
}
else {
    printf("Hello %s\n", name);
}
    return 0;
}