/*DATE DUE DATE ESPRESSE IN g, m, a DETERMINARE LA DATA PIU' RECENTE.*/
#include <stdio.h>
int main(){
    int G1=0,M1=0,A1=0,G2=0,M2=0,A2=0;
    printf("inserisci il giorno: ");
    scanf("%d", &G1);
    printf("inserisci il mese: ");
    scanf("%d", &M1);
    printf("inserisci l'anno: ");
    scanf("%d", &A1);
    printf("inserisci il giorno: ");
    scanf("%d", &G2);
    printf("inserisci il mese: ");
    scanf("%d", &M2);
    printf("inserisci l'anno: ");
    scanf("%d", &A2);
    
     /*7/5/2005
     12/11/2000*/
     //controllo prima data
    if(A1<A2){
        printf("la data2 è più recente");
        }
            else{
                if(A1>A2)
                    printf("la data1 è più recente");
        }
            if(A1>A2){
                printf("la data1 è più recente");
        }
    
        if(A1==A2){
            if(M1<M2)
             printf("la data2 è più recente");
                else if(M1>M2)
                    printf("la data1 è più recente");
                        if(M1==M2){
                            if(G1<G2)
                                printf("la data2 è più recente");
                        }
                                
                                else if(G1>G2){
                                     printf("la data1 è più recente");
                                     }

    return 0;
    
}
