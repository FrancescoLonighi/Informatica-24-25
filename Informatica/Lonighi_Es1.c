/*GENERATA UNA DATA TRA L’ANNO 2000 E L’ANNO 2024 AD OGGI E SAPENDO
CHE GIACOMO HA 20 GIORNI PER CONSEGNARE IL LAVORO ASSEGNATO
COMUNICARE LA DATA DI CONSEGNA.*/
#include <stdio.h>
#include <stlib.h>
#include <time.h>
int main(){
    int giorno, mese, anno, bisestile;
    srand(time(NULL));
    anno=rand()2000+24;






    if(anno%100==0){
        if(anno%400==0){
            printf("l'anno è bisestile");
            bisestile=1;
        }
        }
    else{
        if(anno%4==0){
            printf("l'anno è bisestile");
            bisestile=1;
        }
    }
    if(mese>=1 && mese <=12){
        if(mese==2){
            if(giorno>=1 && giorno<=28+bisestile){
                printf("la data è accettabile");
            }
            else{
                printf("|n la data non è accettabile");
            }
        }
        else{
            if(mese==11 || mese==4 || mese==6 || mese==9){
                if(giorno>=1 && giorno<=30){
                    printf("|n la data è accettabile");
                }
                else{
                    printf("|n la data non è accettabile");
                }
            }
        }
    }
    else{
        printf("|n la data non è accetabile");
    }





}