#include <stdio.h>
#include <stdlib.h>
#include "interface.h"

void main_interface(){
    int op;
    char filename[50]; // Tamanho do arquivo escolhido de forma arbitraria

    do{
    printf("\n");
    printf("|-------------------------------|\n");
    printf("|         MENU PRINCIPAL        |\n");
    printf("|-------------------------------|\n");
    printf("| 1 - SUBMETER NOVO PROCESSO    |\n");
    printf("| 2 - VER ESTADOS DOS PROCESSOS |\n");
    printf("| 3 - VER USO DE MEMORIA        |\n");
    printf("| 0 - SAIR DO SISTEMA           |\n");
    printf("|-------------------------------|\n");
    printf("\n\t * ESCOLHA UMA OPCAO: ");
    }while(op < 0 || op > 3);

    system(CLEAR);

    switch (op)
    {
    case 0:
        printf("\n\t * DIGITE O NOME DO ARQUIVO: ");
        fgets(filename, 50, stdin);
        break;
    
    default:
        break;
    }
}