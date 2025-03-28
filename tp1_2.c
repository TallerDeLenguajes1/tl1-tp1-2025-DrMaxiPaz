#include<stdio.h>

int cuadrado(int x)
{
    return x * x;
}

void cuadrados(int *x)
{
     *x= *x * *x;
}

void mostrar(int x)
{
    printf("\tLa direccion de memoria de la variable: %d\n", &x);
    printf("\tEl valor de la variable es: %d\n", x);
}

void Invertir(int *a, int *b)
{
    int aux = *a;
    *a = *b;
    *b = aux;
}

void orden(int *a, int *b)
{
    if ((*a) > (*b))
    {
        int aux = (*a);
        (*a) = (*b);
        (*b) = aux;
    }
}

int main(int argc, char const *argv[])
{
    int numero1 = 5,numero2 = 7;
    int cuadrado2 = numero2;
    printf("\tEl numero1 es %d y el numero2 es %d.\n",numero1,numero2);
    printf("\tEl cuadrado de numero1 es %d\n", cuadrado(numero1));
    cuadrados( &cuadrado2);
    printf("\tEl cuadrado de numero2 es %d\n", cuadrado2 );
    printf("\tLa direccion de memoria de la variable numero1 es %d y su valor es %d\n",&numero1, numero1);
    Invertir(&numero1, &numero2);
    printf("\tLos numeros invertidos son  %d y %d\n",numero1, numero2);
    orden(&numero1, &numero2);
    printf("\tLos numeros en orden son  %d y %d\n",numero1, numero2);

    return 0;
}

