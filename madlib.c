#include <stdio.h>
#include <string.h>

int main() {
    // MAD LIBS Game

    char podstatne[50] = "";
    char sloveso[50] = "";
    char pridavne1[50] = "";
    char pridavne2[50] = "";
    char pridavne3[50] = "";

    printf ("Napis pridavne jmeno: ");
    fgets(pridavne1, sizeof(pridavne1), stdin);
    pridavne1[strlen(pridavne1) - 1] = '\0'; // removes the space afther the line

    printf ("Napis podstatne jmeno: ");
    fgets(podstatne, sizeof(podstatne), stdin);
    podstatne[strlen(podstatne) - 1] = '\0'; // removes the space afther the line

    printf ("Napis pridavne jmeno: ");
    fgets(pridavne2, sizeof(pridavne2), stdin);
    pridavne2[strlen(pridavne2) - 1] = '\0'; // removes the space afther the line
    
    printf ("Napis sloveso: ");
    fgets(sloveso, sizeof(sloveso), stdin);
    sloveso[strlen(sloveso) - 1] = '\0'; // removes the space afther the line
    
    printf ("Napis pridavne jmeno: ");
    fgets(pridavne3, sizeof(pridavne3), stdin);
    pridavne3[strlen(pridavne3) - 1] = '\0'; // removes the space afther the line

    printf("\nDnes jsem navstivil/a %s zoo.\n", pridavne1);
    printf("Potkala jsem tam %s.\n", podstatne);
    printf("%s byl/a %s a %s!\n", podstatne, pridavne2, sloveso);
    printf("Byl/a jsem %s!\n", pridavne3);

    return 0;
}