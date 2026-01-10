#include <stdio.h>


int main(){

    // break - breaks out of the loop (STOPs)
    // continue - skips current cycle of a loop (SKIPs)

    for(int i = 1; i <= 10; i++){
        
        if(i == 4){
            continue;
        }
        printf("%d\n", i);
    }

    return 0;
}