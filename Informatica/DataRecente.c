#include <stdio.h>
int main(){
    int a1, m1, g1, a2, m2, g2, bisestile;

    //richie4sta della prima data
    printf("unserisci la prima data nel formato g, m, aaaa: ");
    scanf("%d%d%d", &g1, &m1, &a1);
    printf("%d/%d/%d", g1,m1,a1);
    //richiesta della seconda data
    printf("unserisci la seconda data nel formato g, m, aaaa: ");
    scanf("%d%d%d", &g2, &m2, &a2);
    printf("%d/%d/%d", g2,m2,a2);

    //controllo la prima data
    if(a1%100==0){
        if(a1%400==0){
            printf("l'anno è bisestile");
            bisestile=1;
        }
        }
    else{
        if(a1%4==0){
            printf("l'anno è bisestile");
            bisestile=1;
        }
    }
    if(m1>=1 && m1 <=12){
        if(m1==2){
            if(g1>=1 && g1<=28+bisestile){
                printf("la prima data è accettabile");
            }
            else{
                printf("|n la data non è accettabile");
            }
        }
        else{
            if(m1==11 || m1==4 || m1==6 || m1==9){
                if(g1>=1 && g1<=30){
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
//controllo seconda data
    if(a2%100==0){
            if(a2%400==0){
                printf("l'anno è bisestile");
                bisestile=1;
        }
        }
    else{
        if(a2%4==0){
            printf("l'anno è bisestile");
            bisestile=1;
        }
    }
    //controllo del m2
    if(m2>=1 && m2 <=12){
        if(m2==2){
            if(g2>=1 && g2<=28+bisestile){
                printf("la data è accettabile");
            }
            else{
                printf("|n la data non è accettabile");
            }
        }
        else{
            if(m2==11 || m2==4 || m2==6 || m2==9){
                if(g2>=1 && g2<=30){
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
//controlliamo quale data risulta più recente
    if(a1>a2)
        printf("|n la data più recente è: %d%d%d ", g1,m1,a1);
    else if(a1==a2){
            if(m1>m2)
                 printf("|n la data più recente è: %d%d%d ", g1,m1,a1);
            else if(m1==m2){
                    if(g1>g2)
                        printf("|n la data più recente è: %d%d%d ", g1,m1,a1);
                    else if(g1==g2)
                            printf("|n le date sono uguali");
                        else
                             printf("|n la data più recente è: %d%d%d ", g1,m1,a1);

            }
    }           else


}