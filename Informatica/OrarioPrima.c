/*Scrivere un programma che legge 2 orari in ore minuti e secondi 
	e dire quale viene prima dei due. (Si risolva l’esercizio 
	senza trasformare tutto in secondi)*/

#include <stdio.h>
int main()
{
    int o1, m1, s1, o2, m2, s2;
    printf("\ninserire il primo orario in formto ore, minuti, secondi");
    scanf("%d %d %d", &o1, &m1, &s1);

    printf("\ninserisci il secondo orario in formato ore, minuti, secondi");
    scanf("%d %d %d", &o2, &m2, &s2);
    //validità del primo orario
    if(o1>0 && o1<=24 && m1>=0 && m1<60 && s1>=0 && s1<60)
        printf("\nil primo orario è accettabile");
    else
        printf("\nil primo oraro non è accettabile");
    //validità del secondo orario
    if(o2>0 && o2<=24 && m2>=0 && m1<60 && s1>=0 && s1<60)
        printf("\nil secondo oraio è accettabile");
    else 
        printf("\nil secondo orario non è accettabile");

    //controlliamo quale dei due orari viene prima
    if(o1<o2)
        printf("\nil primo orario %d %d %d viene prima", o1,m1,s1);
    else{
        if(o1==o2){
            if(m1<m2)
                printf("\nil primo orario %d %d %d viene prima", o1,m1,s1);
            else{
                if(m1==m2){
                    if(s1<s2)
                        printf("\nil primo orario %d %d %d viene prima", o1,m1,s1);
                    else{
                        if(s1==s2)
                            printf("\ni due orari sono uguali");
                    }
                }

            }
    }
    

}
