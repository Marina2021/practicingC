#include <stdio.h>
#include <unistd.h>

int main(){

    //for loops = repeat some code a limited number of times
    //              for (Initialization; Condition; Update)

    for(int i = 10; i>0; i--){
        sleep(1);
        printf("%d\n", i);
    }
    printf("Happy New Year!!!\n");

    return 0;
}