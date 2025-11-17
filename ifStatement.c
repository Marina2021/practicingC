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



// char name[50] = "";

// printf("Enter your name: \n");
// fgets(name, sizeof(name), stdin);
// name[strlen(name) - 1] = '\0';

// if(strlen(name) == 0) {
//     printf("You did not enter your name\n");
// }
// else {
//     printf("Hello %s\n", name);
// }



// NESTED IF Statement

float ticketPrice = 10.00;
bool isStudent = true; // 10% discount
bool isSenior = false; // 20% discount

// student = $9
// senior = $8
// student + senior - $7

if(isStudent) {
    if(isSenior) {
    printf("You have a 10%% discount.\n"); 
    printf("You have a 20%% discount.\n");
    ticketPrice *= 0.7;
    } 
    else {
    printf("You have a 10%% discount.\n"); 
    ticketPrice *= 0.9;
    } 
}
    else{
        if(isSenior) {
        printf("You have a 20%% discount.\n");
        ticketPrice *= 0.8;
        }
    }        
printf("The price of the ticket is $%.2f\n", ticketPrice);

    return 0;
}