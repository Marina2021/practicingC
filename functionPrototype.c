#include <stdio.h>
#include <stdbool.h>

void hello(char name[], int age); // function prototype
bool ageCheck(int age);

int main(){

    // function prototype = privide the compliter with information about a function's: 
    //                      name, return type, and parameters before its actual definition. 
    //                      Enables type checking and allows funtions to be used beofre they're deifned. 
    //                      Improves readability, organization, and helps prevent errors. 

    int age = 8;

    hello("Marina", age);

    if(ageCheck(age)){
        printf("You are eligible to work at Pizza delivery\n");
    } else {
        printf("You must be 16+ to work at Pizza delivery\n");
    }


    return 0;
}


void hello(char name[], int age){
    printf("Hello %s\n", name);
    printf("You are %d years old\n", age);

}

bool ageCheck(int age){
    return age >= 16;
}