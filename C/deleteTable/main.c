#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main()
{
    int T[100];
    int Taille, i, pos, N;
    bool check = true;


    printf("donner la taille de tableau : ");
    scanf("%d",&Taille);

    for(i=0; i<Taille; i++){
        printf("entre l'element nomber %d : ",i+1);
        scanf("%d",&T[i]);
    }

    printf("donner la position supprimer : ");
    scanf("%d",&pos);

    do{
        if(pos-1 <= 0 || pos > Taille){
            printf("donner la position entre 1 et %d : ",Taille);
            scanf("%d",&pos);
            check = false;
        }
        else{
            for(i=pos; i<Taille; i++){
                T[i-1] = T[i];
            }
            Taille--;
            check = true;
        }
    }while(check == false);

    for(i=0; i<Taille; i++){
        printf("%d \n",T[i]);
    }

    return 0;
}
