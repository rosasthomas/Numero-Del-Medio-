#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numeroUno;
    int numeroDos;
    int numeroTres;
    int max;
    int min;
    int medio;

    printf("Ingrese el primero numero: ");
    scanf("%d", &numeroUno);
    max = numeroUno;
    min = numeroUno;

    printf("Ingrese el segundo numero: ");
    scanf("%d", &numeroDos);
    if(numeroDos < min){
        min = numeroDos;
    }else if(numeroDos > max){
        max = numeroDos;
        }

    printf("Ingrese el tercer numero: ");
    scanf("%d", &numeroTres);
    if(numeroTres < min){
        min = numeroTres;
    }else if(numeroTres > max){
        max  = numeroTres;
    }

    if(numeroUno > min && numeroUno < max){
        medio = numeroUno;
        printf("El numero del medio es = %d", numeroUno);
    }else if(numeroDos > min && numeroDos < max){
        medio = numeroDos;
        printf("El numero del medio es = %d", numeroDos);
    }else if(numeroTres > min && numeroTres < max){
        medio = numeroTres;
        printf("El numero del medio es = %d", numeroTres);
    }else{
        printf("No hay numero del medio");
    }
    return 0;
}
