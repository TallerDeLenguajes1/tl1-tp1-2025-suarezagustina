#include <stdio.h>
#include <math.h>

void cuadradodenro(int nro){

    int cuadradonro = pow(nro,2);
    printf("El cuadrado del nro ingresado es: %d\n",cuadradonro);

}

void intercambiar(int *a, int *b){

    int c;

    c=*a;
    *a=*b;
    *b=c;
}

void orden(int *a, int *b){

   if (*a > *b)
   {
    int c;
    c=*a;
    *a=*b; //menor lo paso a "a"
    *b=c; //mayor lo paso a "b"
   }
   
}

int main(){
//4a)
    int nro,a,b;
    char resp = 'S';
    printf("Ingrese un numero para calcular su cuadrado:");
    scanf("%d",&nro);

    cuadradodenro(nro);
//4c)
    printf("Contenido de la variable: %d\n",nro);
    printf("Direccion de la variable: %p\n", &nro);
//4d)
//4f)
    while (resp == 's' || resp == 'S')
    {
        printf("Ingrese un numero A:");
        scanf("%d",&a);
        printf("Ingrese un numero B:");
        scanf("%d",&b);
    
        printf("Numeros iniciales A: %d y B:%d\n",a,b);
    
        intercambiar(&a,&b);
    
        printf("Numeros intercambiados A: %d y B:%d\n",a,b);
//4d)
        orden(&a,&b);
        printf("Numeros ordenados A: %d y B:%d\n",a,b);
//4f)
        printf("Seguir con los pares de nros?: (s/n)");
        scanf(" %c",&resp);
    }

    return 0;
}