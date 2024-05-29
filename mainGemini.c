#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "interface.h"


// Função para processar a entrada do usuário
void processar_entrada(char *entrada) {
    int opcao = atoi(entrada);

    switch (opcao) {

        case 1:  // Criar Processo
            char nome[20];
            int prioridade, tamanho_segmento;
            printf("Digite o nome do processo: ");
            scanf("%s", nome);
            printf("Digite a prioridade do processo: ");
            scanf("%d", &prioridade);
            printf("Digite o tamanho do segmento do processo (em KB): ");
            scanf("%d", &tamanho_segmento);
            processCreate(nome, prioridade, tamanho_segmento);
            break;
        

        case 2:  // Finalizar Processo
            int pid;
            printf("Digite o PID do processo a ser finalizado: ");
            scanf("%d", &pid);
            processFinish(pid);
            break;
        

        case 3: // Exibir Estado dos Processos
            // Implemente a função para exibir o estado dos processos
            //exibir_estado_processos();
            break;

        case 4: // Exibir Mapa de Memoria
            // Implemente a função para exibir o mapa de memória
            //exibir_mapa_memoria();
            break;

        case 6: // Sair
            exit(0);

        default:
            printf("Opcao invalida!\n");
    }
}

int main() {
    // Inicializa as estruturas de dados
    inicializar_memoria();
    // ... outras inicializações

    char entrada[100];

    while (1) {
        exibir_menu();
        fgets(entrada, sizeof(entrada), stdin);
        processar_entrada(entrada);
    }

    return 0;
} 

