#include<stdio.h>
#include <stdlib.h>
int somme(int a, int b){
    return a +b;
}
int main (int argc, char *argv[]){
    int a, b;
    int p;
    a=atoi(argv[1]);
    b=atoi(argv[2]);
    //printf("\nDonnez les nombres a et b:");
    //scanf("%d %d",&a,&b);
    p=somme(a,b);
    printf("\n La somme de %d et %d est %d\n",a,b,p);
}
