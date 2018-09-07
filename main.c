#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <conio.h>
#include "Funcion.h"


int main()
{

    char seguir='S';
    float numberOne=0, numberTwo=0,resultSuma,resultResta,resultMultiplicacion,resultDivision;
    unsigned long int resultFacA, resultFacB;
    int opcion;

    do
    {
        printf("\n\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n",201,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,187);
        printf("\t%c MENU CALCULADORA %c\n",186,186);
        printf("\t%c ESPINDOLA MATIAS %c\n",186,186);
        printf("\t%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c%c\n\n\n",200,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,205,188);
        printf("1%cIngrese 1er Operando (A=%.2f)\n",250,numberOne);
        printf("2%cIngrese 2do Operando (B=%.2f)\n\n",250,numberTwo);
        printf("3%cCalcular Todas Las Operaciones\n\n",250);
        printf("  %cSuma (A+B)\n",250);
        printf("  %cResta (A-B)\n",250);
        printf("  %cDivision (A/B)\n",250);
        printf("  %cMultiplicacion (A*B)\n",250);
        printf("  %cFactorial (A! & B!)\n\n",250);
        printf("4%cMostrar Resultado De Todas Las Operaciones Anteriores\n\n",250);
        printf("5%cSalir\n\n",250);
        printf("%c Opcion Elegida: ", 254);
        fflush(stdin);
        scanf("%d",&opcion);

        switch(opcion)
        {
        case 1:
            printf("\n%c Ingrese Primer Operando: ",254);
            fflush(stdin);
            scanf("%f",&numberOne);
            system("cls");
            break;

        case 2:
            printf("\n%c Ingrese Segundo Operando: ",254);
            fflush(stdin);
            scanf("%f",&numberTwo);
            system("cls");
            break;

        case 3:
             if(numberOne==0 && numberTwo==0 )
            {
                system("cls");
                printf("%c Usted No A Ingresado Ningun Numero, Por Favor Ingrese Uno Para Luego Calcular Todas Las Operaciones!\n\n",158);
                system("pause");
                system("cls");
            }
            else
                {
                    system("cls");
                    resultSuma=suma(numberOne,numberTwo);
                    resultResta=resta(numberOne,numberTwo);
                    resultMultiplicacion=multiplicacion(numberOne,numberTwo);
                    resultDivision=division(numberOne,numberTwo);
                    resultFacA=factorial(numberOne);
                    resultFacB=factorial(numberTwo);
                    printf("Se Calcularon Todas Las Operaciones Para A=%.2f Y B=%.2f\n",numberOne,numberTwo);
                    system ("pause");
                    system("cls");
                }
            break;

        case 4:
            if(numberOne==0 && numberTwo==0 )
            {
                system("cls");
                printf("%c Usted No A Ingresado Ningun Numero, Por Favor Ingrese Uno Para Luego Mostrar Los Resultados De Todas Las Operaciones Anteriores!\n\n",158);
                system("pause");
                system("cls");
            }
            else
                {
                    system("cls");
                    printf("Resultado De Todas Las Operaciones Para A=%.2f Y B=%.2f\n\n\n",numberOne,numberTwo);
                    printf("El Resultado De (A+B) Es: %.2f\n\n", resultSuma);
                    printf("El Resultado De (A-B) Es: %.2f\n\n", resultResta);
                    if (numberTwo==0)
                    {
                        printf("%c No Se Puede Dividir Por Cero\n\n",158);
                    }
                    else
                    {
                        printf("El Resultado De (A/B) Es: %.2f\n\n", resultDivision);
                    }
                    printf("El Resultado De (A*B) Es: %.2f\n\n", resultMultiplicacion);
                    if (numberOne<1)
                    {
                        printf("%c El Factorial De |A| No Se Aplica Porque El Numero Es Menor A 1\n\n",158);
                    }
                    else if (numberOne>16)
                    {
                        printf("%c El Factorial De |A| No Se Aplica Porque Su Resultado Es Muy Grande, Maximo 16\n\n",158);
                    }
                    else
                    {
                        printf("El Resultado Del Factorial De |A| Es: %ld\n\n", resultFacA);
                    }
                    if (numberTwo<1)
                    {
                        printf("%c El Factorial De |B| No Se Aplica Porque El Numero Es Menor A 1\n\n\n",158);
                    }
                    else if (numberTwo>16)
                    {
                        printf("%c El Factorial De |B| No Se Aplica Porque Su Resultado Es Muy Grande, Maximo 16\n\n",158);
                    }
                    else
                    {
                        printf("El Resultado Del Factorial De |B| Es: %ld\n\n\n", resultFacB);
                    }
                system("pause");
                system("cls");
            }
            break;

        case 5:
            seguir = 'N';
            break;

        default:
            system("cls");
            seguir=verificacionOpcion();
        }
    }while(seguir=='S');

    return 0;
}

