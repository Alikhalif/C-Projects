#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char nom[10] = "Ali";

    printf("%d \n",strlen(nom));
    printf("%d",len(nom));
    return 0;
}

int len(char T[]){
    int i=0;
    while(T[i] != '\0'){
        i++;
    }
    return i;
}

