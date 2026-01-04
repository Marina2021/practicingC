#include <stdio.h>

int result = 0; // GLOBAL SCOPE (hard to debug)

int add(int x, int y){
    result = x + y; 
    return result;
}

int substract(int x, int y){
    result = x - y;
    return result;
}

int main(){

    // variable scope = refers to where a variable is recognized and accessible. 
    //                  variable can share the same name if they are in different scopes {}
    
    int x = 5; 
    int y = 6; 
    
    result = substract(x, y);

    printf("%d\n", result);

    return result;

}