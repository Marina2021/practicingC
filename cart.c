#include <stdio.h>
#include <string.h>



int main() {

    // Shopping cart program

    char zbozi[50] = "";
    float cena = 0.0f;
    int mnozstvi = 0;
    char mnena [5] = "Kč.";
    float celkem = 0.0f;

    printf("Co chcete koupit? ");
    fgets(zbozi, sizeof(zbozi), stdin);
    zbozi[strlen(zbozi) - 1] = '\0';

    printf("Kolik to stoji? ");
    scanf("%f", &cena);

    printf("V jakem mnozstvi? ");
    scanf("%d", &mnozstvi);

    celkem = cena * mnozstvi;

    printf("\nKoupili jste %s v poctu %d\n za ", zbozi, mnozstvi);
    printf("%.2f%s\n", celkem, mnena);

    return 0;

}