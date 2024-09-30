/*Dati i due numeri A e B verificare se A è il quadrato di B*/
#include <stdio.h>
int main()
{
    float A, B, quadrato;
    A=0;
    B=0;
    quadrato=0;
    printf("inserisci il valore A: ");
    scanf("%f",&A);
    printf("inserisci il valore B: ");
    scanf("%f",&B);
    quadrato = B*B;
    printf("il doppio è: %f", quadrato);
    if(A == quadrato)
    {
        printf("il primo valore %f corrisponde al quadrato %f", A,B);
    }
    else
    {
        printf("il primo valore %f non corrisponde al quadrato%f", A,B); 
    }
    return 0;

}