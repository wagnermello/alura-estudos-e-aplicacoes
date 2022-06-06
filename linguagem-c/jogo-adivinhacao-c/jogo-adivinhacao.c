#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

    // imprime o cabecalho do nosso jogo
    printf("\n\n\n**************************************\n");
    printf("Bem vindo ao jogo de adivinhação\n");
    printf("Dica: O número secreto é um número entre 0 e 99.\n");

    printf("**************************************\n");

    int segundos = time(0);
    srand (segundos);

    int numerogrande = rand();

    int numerosecreto = numerogrande %  100;


    int chute;
    int tentativa = 1;

    double pontos = 1000;

    while (1) {  printf("Tentativa %d\n", tentativa);
        printf("Qual é o seu chute?\n");

        scanf("%d", &chute);
        printf("Seu chute foi %d\n", chute);

        if (chute < 0) {
            printf("Você não pode chutar números negativos. \n");
            continue;
        }

        int acertou = (chute == numerosecreto);
        int maior = chute > numerosecreto;

        if (acertou) {
            printf("Parabéns, você acertou!\n");

            break;
        } else if (maior) {
            printf("Você chutou um número maior. Tente novamente!\n");
        } else {
            printf("Você chutou um número menor. Tente novamente!\n");
        };

        tentativa++;

        double pontosperdidos = abs(chute - numerosecreto) / 2.0;
       
        pontos = pontos - pontosperdidos;
    }

    printf("Fim de jogo.\n");
    printf("Você acertou em %d tentativas!\n", tentativa);
    printf("Total de pontos: %.1f\n", pontos);
}