#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int T[100];
    int Taille, i, Max1=0, Max2=0;
    bool check = true;


    printf("donner la taille de tableau : ");
    scanf("%d",&Taille);

    for(i=0; i<Taille; i++){
        printf("entre l'element nomber %d : ",i+1);
        scanf("%d",&T[i]);
    }

    Max1 = T[0];
    Max2 = T[0];

    for(i=0; i<Taille; i++){
        if(T[i] > Max1){
            Max2 = Max1;
            Max1 = T[i];

        }
    }

    printf("1 max est %d : ",Max1);
    printf("deuxieme max est %d : ",Max2);

    return 0;
}
