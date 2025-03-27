#include<stdio.h>

int main(int argc, char const *argv[])
{
    printf("Hola Mundo\n");
    int numero = 45;
    int *puntero = &numero;
    printf("\tEl contenido del puntero es: %d\n",*puntero );
    printf("\tLa direccion de memoria almacenada por el puntero es: %d\n",puntero );
    printf("\tLa direccion de memoria de la variable: %d\n",&numero );
    printf("\tLa direccion de memoria del puntero es: %d\n",&puntero );
    printf("\tEl tamaño de memoria utilizado por la variable es: %d\n",sizeof(numero) );
    
    return 0;
}
