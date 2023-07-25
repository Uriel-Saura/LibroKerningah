#include <stdio.h>

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    while (lower <= upper)
    {
        fahr = lower;
        celsius = 5*(fahr - 32)/9;
        printf("La conversion de %d a celsius es: %6.2f\n", lower, celsius);      
        lower += step;  
    }
    
}
