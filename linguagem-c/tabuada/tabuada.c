/*Escreva um programa que peça um inteiro ao usuário, e com esse inteiro, ele imprima, linha-a-linha, a tabuada daquele número até o 10. Por exemplo, se ele escolher o número 2, o programa imprimirá: 2x1=2, 2x2=4, 2x3=6, ..., 2x10=20.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {

    printf("\n\n\nEscolha um número. Você verá a tabuada deste número até 10.\n");

    int numero;
    int tabuada;
    int resultado;

    scanf("%d", &numero);
    printf("Você escolheu o número %d.\n A tabuada deste número até 10 é:\n", numero);  
    
    for (tabuada = 1; tabuada <= 10; tabuada++) {
        resultado = numero * tabuada;
        printf("%d x %d = %d\n\n\n", numero, tabuada, resultado);
    }

}

