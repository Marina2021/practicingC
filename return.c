#include <stdio.h>
#include <stdbool.h>


int square(int num) {
    return num * num;
}

double cube(double num){
    
    return num * num * num;
}


bool ageCheck(int age) {
    if (age >=18) {
        return true;
    } else {
        return false;
    }
}

int getMax(int x, int y){
    if(x >= y){
        return x;
    } else {
        return y;
    }
}
int main() {

    // int x = cube(2);
    // int y = cube(3);
    // int z = cube(4);

    // printf("%d\n", x);
    // printf("%d\n", y);
    // printf("%d\n", z);




    // int age = 15; 

    // if(ageCheck(age)){
    //     printf("You may sign up\n");
    // } else {
    //     printf("You must be 18+ to sign up\n");
    // }




    int max = getMax(2, 3);
    printf("%d\n", max);

    return 0;
}