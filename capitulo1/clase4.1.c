#include <stdio.h>

int main(){
    float fahr, celsius;
    int lower, upper, step;

    lower = 0;
    upper = 300;
    step = 20;

    for (upper; upper >= lower; upper-=step)
    {
        fahr = upper;
        celsius = 5*(fahr - 32)/9;
        printf("La conversion de %d a celsius es: %6.2f\n", upper, celsius);      
    }
    
    
}
