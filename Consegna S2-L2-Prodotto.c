#include <stdio.h> // Inserisci libreria

int main() { // Inizio della Procedura (Programma)

    int num1, num2, prodotto;  // dichiarazioni variabili di tipo intere

    printf("**** CALCOLO PRODOTTO DI DUE NUMERI ****"); // Stampa a schermo il Titolo del Programma

    printf("\n\nInserisci il primo numero = "); // Chiedi input all'utente
    scanf("%d", &num1); // Conserva l'input nella variabile dichiarata 'num1'
    

    printf("\n\nInserisci il secondo numero = "); // Chiedi input all'utente
    scanf("%d", &num2); // Conserva l'input nella variabile dichiarata 'num2'

    prodotto = num1 * num2; // Assegna alla variabile 'prodotto' il risultato del prodotto tra i valori delle variabili 'num1' e 'num2'.

    printf("\n\n PRODOTTO tra i due numeri = %d", prodotto); // Stampa a schermo il valore della variabile prodotto
     

    printf("\n\n**** FINE PROGRAMMA ****\n\n"); // Stampa a schermo una frase di fine programma.

return 0; // Fine procedura.

}
