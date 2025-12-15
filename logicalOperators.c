#include <stdio.h>
#include <stdbool.h>

int main() {

    // logical operators = used to combine or modify boolean expression 

    // && = AND
    // || = OR
    // ! = NOT

    // int temp = 10;

    // if(temp <= 0 || temp >= 30){
    //     printf("The weather is BAD!\n");
    // } 
    // else{
    //     printf("The weather is GOOD\n");
    // }

    bool isSunny = true;

    if(!isSunny){
        printf("Today is CLOUDY...\n");
    } else {
        printf("Today is SUNNY!\n");
    }
    
    return 0;
}