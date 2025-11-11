#include <stdio.h>
#include <stdbool.h>


int main() {

    int birthyear = 0;
    int age = 0;
    int currentyear = 2025;

    printf("What is the year of your birth? \n");
    scanf("%d", &birthyear);
    age = currentyear - birthyear;

    if (age > 65) {
        printf("You are a senior\n");
    }
    else if(age >= 18) {
        printf("You are an adult person\n");
    }
    else if(age < 0) {
        printf("You haven't been born yet\n");
    }
    else if(age == 0) {
        printf("You are a newborn\n");
    }
    else {
        printf("You are a child\n");
    }

// bool isStudent = 0;

// if (isStudent) {
//     printf("You are a Student\n");
// }
// else {
//     printf("You are not a Student\n");
// }

    return 0;
}