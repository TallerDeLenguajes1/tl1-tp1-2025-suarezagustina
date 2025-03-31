#include <stdio.h>

int main() {

    //printf("Hola mundo\n");
    int variableA = 10;
    int *punteroA = &variableA;
    //3e).1_
    printf("El contenido del puntero es: %d\n", *punteroA);
    //3e).2_
    printf("La direccion de memoria almacenada por el puntero es: %p\n", punteroA);
    //3e).3_
    printf("La direccion de memoria de la variable es: %p\n", &variableA);
    //3e).4_
    printf("La direccion de memoria del puntero es: %p\n", &punteroA);
    //3e).5_
    return 0;
    printf("El tamanio de memoria utilizado por esa variable es: %d bytes\n", sizeof(variableA));
}