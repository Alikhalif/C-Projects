#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
/*
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

    printf("donner le nomber inserer : ");
    scanf("%d",&N);

    printf("donner la position : ");
    scanf("%d",&pos);

    do{
       if(pos-1<=0 || pos>Taille+1){
          printf("donner la position entre 1 et %d : ",Taille);
          scanf("%d",&pos);
          check = false;
       }
       else{
          for(i=Taille; i>=pos-1; i--){
            T[i]=T[i-1];
          }
          Taille++;
          T[pos-1] = N;
          check = true;
       }

    }while(check == false);

    for(i=0; i<Taille; i++){
        printf("% 5d \n", T[i]);
    }
    return 0;
}
*/


int main(){
    int arr[100], *myArr;
    int i,N, Taille, pos;
    bool check;

    printf("donner la taille du tableau => ");
    scanf("%d",&Taille);

    for(i=0; i<Taille; i++){
        printf("donner nomber %d => ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<Taille; i++){
        printf("%d \n",arr[i]);
    }

    printf("donner le nomber inserer => ");
    scanf("%d",&N);

    printf("donner la position => ");
    scanf("%d",&pos);

    do{
        if(pos<0 || pos>Taille){
            printf("donner le position enter 1 et %d => ",Taille);
            scanf("%d",&pos);
            check = false;
        }
        check = true;
    }while(check == false);

    myArr = insert(arr,Taille,pos,N);


    for(i=0; i<Taille+1; i++){
        printf("%d \n",myArr[i]);
    }



    return 0;
}


int insert(int arr[], int taille, int pos, int N ){
    int i;
    for(i=taille; i>=pos-1; i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=N;
    taille++;

    return arr;
}



















