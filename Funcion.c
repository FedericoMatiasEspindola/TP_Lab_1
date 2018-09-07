#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "Funcion.h"


float suma (float a, float b)
{
    float resSuma;
    resSuma = a+b;
    return resSuma;
}

float resta (float a, float b)
{
    float resResta;

    resResta = a-b;
    return resResta;
}

float division (float a, float b)
{
    float resDivision;
    resDivision = (float)a/b;
    return(resDivision);
}

float multiplicacion(float a, float b)
{
    float resMult;
    resMult = a*b;
    return resMult;
}

long int factorial(int a)
{
    long int resultadoFactorial;
    while(a>=1)
    {
        if(a==1)
            return 1;
        resultadoFactorial=a* factorial(a-1);
        return (resultadoFactorial);
    }
    return 0;
}


char verificacionOpcion(void)
{
    char letra;
    printf("Opcion No Valida, Desea Continuar? (S/N): ");
    letra=toupper(getche());
    while(!((letra=='S')||(letra=='N')))
    {
        printf("\nOpcion No Valida, Reingre (S/N):");
        letra=toupper(getche());
    }
    system("cls");

    if (letra=='N')
    {
        printf("Calculadora Finalizada!\n");
    }
    return (letra);
}
