/*Verificare se un numero dato in input è divisibile sia per 3 sia per 5*/
#include <stdio.h>
int main()
{
    int A,B,C;
    A = 0;
    B = 3;
    C = 5;
    printf("inserisci il valore A: ");
    scanf("%d", &A);
    if(A / B)
    {
        printf("A: %d è divisibile per B %d", A,B);
    }
    else
    {
        printf("A: %d non è divisibile per B %d", A,B);
    }
    if(A / C)
    {
        printf("A: %d è divisibile per C %d", A,C);
    }
    else
    { 
        printf("A: %d non è divisibile per C %d", A,C);
    }
    return 0;
}