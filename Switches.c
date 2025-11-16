#include <stdio.h>

int main() {

    // switch = an alternative to using many if-else statements
    // more efficient with fixed integer values

    // int dayOfWeek = 0;

    // printf("Enter day of the week (1 - 7): \n");
    // scanf("%d", &dayOfWeek);

    // switch(dayOfWeek) {
    //     case 1:
    //         printf("It is Monday\n");
    //         break;
    //     case 2:
    //         printf("It is Tuesday\n");
    //         break;
    //     case 3:
    //         printf("It is Wednesday\n");
    //         break;
    //     case 4:
    //         printf("It is Thursday\n");
    //         break;
    //     case 5:
    //         printf("It is Friday\n");
    //         break;
    //     case 6:
    //         printf("It is Saturday\n");
    //         break;
    //     case 7:
    //         printf("It is Sunday\n");
    //         break;
    //     default: 
    //         printf("Please use only 1 - 7 \n");
    // }


    char dayOfWeek = '\0';

    printf("Enter day of the week (M, T, W, H, F, S, U): \n");
    scanf("%c", &dayOfWeek);

    switch(dayOfWeek) {
        case 'M':
            printf("It is Monday\n");
            break;
        case 'T':
            printf("It is Tuesday\n");
            break;
        case 'W':
            printf("It is Wednesday\n");
            break;
        case 'H':
            printf("It is Thursday\n");
            break;
        case 'F':
            printf("It is Friday\n");
            break;
        case 'S':
            printf("It is Saturday\n");
            break;
        case 'U':
            printf("It is Sunday\n");
            break;
        default: 
            printf("Please use only M, T, W, H, F, S, U \n");
    }


    return 0;
}