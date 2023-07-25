#include  <stdio.h>

int main(){
    int c, i, nwhite, nother;

    nwhite=nother=0;

    while ((c=getchar())!=EOF){
        if (c >= '0' && c <= '9'){
            
        } else if (c == ' ' || c == '\n' ||  c == '\t'){
            ++nwhite;
        } else {
            ++nother;
        }
           
    }
    
    printf("digitos = ");
    printf(", espacios blancos = %d, otros = %d ",nwhite,nother);

}