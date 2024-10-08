/*data una data in formato verificare se
 la data è accettabile*/
 #include <stdio.h>

 int main(){

    int giorno=0;
    int mese=0;
    int anno=0;
    int bisestile=0;

    //richiesta di input
    printf("inseriscisci il giorno: ");
    scanf("%d", &giorno);
    printf("inseriscisci il mese: ");
    scanf("%d", &mese);
    printf("inseriscisci l'anno: ");
    scanf("%d", &anno);

    //controllo
    //un anno è bisestile se è muldiplo di 4 ma non di 100 oppure è multiplo di 400
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
    //controllo del mese
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
    return 0;
 }