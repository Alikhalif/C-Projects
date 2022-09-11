#include <stdio.h>
#include <stdlib.h>

int main()
{
    int T[100];
    int  Taille,i, min1,min2;

    printf("donner la taille de tableau : ");
    scanf("%d",&Taille);

    for(i=0; i<Taille; i++){
        printf("donner l'element %d : ",i+1);
        scanf("%d",&T[i]);
    }

    min1 = T[0];
    min2 = T[0];
    for(i=0; i<Taille; i++){
        if(T[i] < min1){
            min2 = min1;
            min1 = T[i];
        }
    }
    printf("min 1 est = %d \nmin 2 est = %d: ",min1,min2);

    return 0;
}
