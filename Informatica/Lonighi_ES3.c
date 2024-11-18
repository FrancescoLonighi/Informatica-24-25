/*DATA UNA COPPIA DI NUMERI INTERI COSTRUIRE UN MENÙ TALE CHE
PREVEDA:
1) LA SOMMA IN VALORE ASSOLUTO;
2) LA DIFFERENZA TRA IL MAGGIORE E IL MINORE;
3) GENERATO UN VALORE K(INTERO) DETERMINARE CHI DEI VALORI SI
AVVICINA DI PIÙ;
4) DETERMINARE SE UNO È MULTIPLO DELL’ALTRO.*/
#include <stdio.h>
int main(){
    int num1, num2, somma, K, maggiore, minore, differenza, scelta;
    num1=0;
    num2=0;
    K=0;
    
    printf("inserisci un primo numero: ");
    scanf("%d", &num1);
    printf("inserisci un secondo numero: ");
    scanf("%d", &num2);
    printf("inserisci un valore a K: ");
    scanf("%d", &K);

    printf("\n1. somma in valore assoluto: ");
    printf("\n2. differenza tra maggiore e minore");
    printf("\n3. quale valore di avvicina di più: ");
    printf("\n4. determiare se è un multiplo di dell'altro");
    printf("\nscegli un valore dal menù: ");
    scanf("%d", &scelta);
    if(scelta>0 && scelta<0){
        switch (scelta);
        {
        case 1:
            printf("\nla somma assoluta vale: %.2d", num1+num2);
            break;
        case 2:
            printf("\nla differenza vale: %.2d", num1-num2);
            break;
        case 3:
            printf("\nvalore che si avvicina di più %.2d", );
            break;
        case 4:
            printf("\nmultiplo rispetto all'altro %.2d", num1*num2);
            break;
        default:
            printf("\nhai inserito una scelta non valida: ");
        
       
        }

    }




}