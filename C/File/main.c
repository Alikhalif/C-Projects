#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char aff[255];

    fp = fopen("hello.txt","r");

    fprintf(fp,"\n3khkh");

    while(!feof(fp)){
        fscanf(fp,"%s",aff);
        printf("%s \n",aff);
    }




    return 0;
}
