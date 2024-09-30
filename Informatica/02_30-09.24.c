/*stabilire se dati due numeri A e B controllare se A è minore, uguale, maggiore di B*/
#include <stdio.h>
int main()
{
    int A=0;
    int B=0;
    printf("inserisci il valore A: ");
    scanf("%d", &A);
    printf("inserisci il valore B: ");
    scanf("%d", &B);
    if(A==B)
    {
        printf("i due valore sono uguali");
    }
    else 
    {
        if(A>B)
            printf("A: %d è maggiore di B %d", A,B);
        else
            printf("A: %d è minore di B %d", A,B);
    }
    return 0;
}

