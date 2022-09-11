#include <stdio.h>
#include <stdlib.h>

/*
int main()
{

    int Matrix1[3][3], Matrix2[3][3], Matrix3[3][3];
    int i,j;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("donner l'element %d - %d : ",i+1,j+1);
            scanf("%d",&Matrix1[i][j]);
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("donner l'element %d - %d : ",i+1,j+1);
            scanf("%d",&Matrix2[i][j]);
        }
    }


    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            Matrix3[i][j] = Matrix1[i][j] + Matrix2[i][j];
        }
    }

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("%d4 ",Matrix3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
*/


int main(){
    int matrix1[3][3], matrix2[3][3], matrix3[3][3];
    int i,j;
    int max, ipos, jpos;

    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            printf("entre le nomber %d - %d : ",i+1, j+1);
            scanf("%d",&matrix1[i][j]);
        }
    }

    max = matrix1[0][0];
    for(i=0; i<3; i++){
        for(j=0; j<3; j++){
            if(matrix1[i][j] > max){
                max=matrix1[i][j];
                ipos = i+1;
                jpos = j+1;
            }
        }
    }

    printf("\nle nomber max dans le matrix %d - %d => %d ",ipos, jpos,max);

}

