#include <stdio.h>

int main(){
    long nc;
    nc = 0;
    while (getchar() != EOF){
        nc += 1;
    }

    printf("Largo %ld",nc);
}