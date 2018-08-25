#include <stdio.h>
#include <stdlib.h>
    //int i = 0;

    //for(i = 0; i < 3; i++)
    //{

int main()
{

    int contador = 0;
    float acum= 0;
    float promedio;
    int unaEdad;
    int seguir = 1;


    while(seguir)
    {

    printf("Ingrese una edad:");
    scanf("%d" , & unaEdad);

    printf("Su edad es: %d\n" ,unaEdad);

    acum=acum+unaEdad;
    contador++;


    printf("Desea continuar 0/1 ? %d\n" , seguir);
    scanf("%d" , & seguir);
    }

    promedio = acum / contador;


    printf("El promedio es %.2f" , promedio);








    return 0;
}
