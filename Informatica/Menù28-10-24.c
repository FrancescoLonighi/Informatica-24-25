/*Creare una sorta di menù( vedi esempio) tramite dei printf per la 
scelta dell'operazione da compiere tra due valori generati 
casualmente( eseguendo lì dove c'è bisogno gli opportuni controlli). 
Comunicare il risultato dell'operazione o la scelta 
dell'utente di non fare niente e uscire dal programma:ES: "Seleziona l'operazione da eseguire: 
        0.  TERMINA
        1.  SOMMA
        2.  DIFFERENZA
        3.  MOLTIPLICAZIONE
        4.  DIVISIONE  "*/

        #include <stdio.h>
        #include <time.h>
        int main(){
            float num1, num2;
            int scelta;
            printf("scegli dal menù l'operazione da fare");
            printf("\n0. termina");
            printf("\n1. somma");
            printf("\n2. differenza");
            printf("\n3. moltiplicazione");
            printf("\n4. divisione");

            printf("\nscegli l'operazioneda compiere: ");
            scanf("%d", &scelta);
            srand(time (NULL));
            num1=rand()%50+1;
            num2=rand()%50+1;
            printf("%.1f %.1f", num1, num2);
            switch (scelta)
            {
                case 0:
                    printf("\nil programma è terminato");   
                    break;
                case 1:
                    printf("\nla somma vale: %.2f", num1+num2);
                    break;
                case 2:
                    printf("\nla differnza vale: %.2f", num1-num2);
                    break;
                case 3:
                    printf("\nla moltiplicazione vale: %.2f", num1*num2);
                    break;
                case 4:
                    printf("\nla divisione vale: %.2f", num1/num2);
                    break;
                default:
                    printf("\nhai inserito una scelta non valida: ");

            }
            return 0;
        }
