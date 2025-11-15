#include <stdio.h>
#include <stdbool.h>

int main() {

    char choice = '\0'; 
    float celsius = 0.0f;
    float fahrenheit = 0.0f;

    printf("Temperature Converter Calculator\n");
    printf("C. Celsius to Fahrenheit converter\n");
    printf("F. Farhenheit to Celsius converter\n");
    printf("Which converter would you like to use? Enter C or F: \n");
    scanf("%c", &choice);

    if(choice == 'C') {
        printf("Enter temperature in Celsius: \n");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("%.1f in Celsius will be %.1f in Fahrenheit\n", celsius, fahrenheit);
    } 
    else if(choice == 'F') {
        printf("Enter temperature in Fahrenheit: \n");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("%.1f in Fahrenheit will be %.1f in Celsius\n", fahrenheit, celsius);
    } 
    else {
        printf("Invalid option, please enter C or F\n");
    }

    return 0;
}