#include <stdio.h>

int main(){
    int c;
    printf("Escribe un caracter: ");
    c = getchar();
    while (c != EOF){
        printf("%d",c);
        c = getchar();
    }
}