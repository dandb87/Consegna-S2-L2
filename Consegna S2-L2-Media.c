#include <stdio.h>      //Inserisci libreria

int main() {
    float num1, num2, num3, media;   //Dichiarazioni variabili di tipo float (numeri interi con virgola mobile)

    printf(" **** CALCOLO MEDIA DI 3 NUMERI ****"); // Stampa a schermo un Titolo del programma

    printf("\n\nInserisci il primo num = ");    // Chiedi input1 all'utente
    scanf("%f", &num1);  //Conserva l'input1 nella variabile 'num1'
    
    printf("\n\nInserisci il secondo num = ");  // Chiedi input2 all'utente
    scanf("%f", &num2);  // Conserva input2 nella variabile 'num2'
    
    printf("\n\nInserisci il terzo num = ");  // Chiedi input3 all'utente
    scanf("%f", &num3); // Conserva input3 nella variabile 'num3'
    
    media = (num1 + num2 + num3) / 3.0;  // Calcolo media e assegnazione variabile 'media'
    
    printf("\n\n La MEDIA tra i 3 numeri = %.2f", media); // Stampa a schermo il valore della variabile 'media' fermandoti a due posizioni decimali

    printf("\n\n**** FINE PROGRAMMA ****\n\n"); // Stampa a schermo una frase di fine programma.
    
    return 0; // Fine Procedura.
}
