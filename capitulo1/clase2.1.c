#include <stdio.h>

int main(){

    int farh, celsius;
    int lower, upper, step;

    upper = 50;
    step = 10;
    lower = -10;

    while (lower <= upper){
        celsius = lower;
        farh = (9 * celsius)/5 + 32; 
        printf("La conversion de %d a fahrenheit es: %d\n",celsius,farh);
        lower += step;        
    }

}