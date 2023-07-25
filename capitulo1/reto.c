#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define GANADOR 1
#define COMPITIENDO 0

int main () {

    int letra_m, letra_u, letra_g, state, turno, c;
    state = COMPITIENDO;
    turno=letra_m=letra_u=letra_g=c=0;
 
    time_t t;
    srand((unsigned) time(&t));

    letra_g = (rand() % 26)+ 97;

    printf("Bienvenido a adivina la letra.\n");
    printf("Las letras que podras ingresar para ver si es la correcta es de [a-z] minusculas\n");
    printf("¿Quien comienza primero? (M) Maquina (U) Usuario\n");
    c = getchar();

    while (state != GANADOR){

         if (c == 'U'){
            printf("\nTurno del usuario: ");
            __fpurge(stdin); 
            letra_u = getchar();
            if (letra_u == letra_g){
                state = GANADOR;
                printf("Has adivinado la letra correcta\n");
            } else {
                c = 'M';
            }
        }
        
        if (c == 'M'){
            printf("\nTurno maquina: ");
            letra_m = (rand() % 26)+ 97;
            printf("%c",letra_m);
            if (letra_m == letra_g){
                state = GANADOR;
                printf("\nLa maquina ha ganado suerte para la porxima\n");
            } else {
                c = 'U';
            }
        }        
    }
    
}