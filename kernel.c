#include <stdio.h>
#include <stdlib.h>
#include <semaphore.h>

#include "kernel.h"

sem_t mutex;
kernel_t *kernel;

void kernel_init(void) {
  kernel = (kernel_t *)malloc(sizeof(kernel_t));

  if (!kernel) {
    printf("\n--> Erro: Memoria insuficiente para locar kernel!");
    exit(EXIT_FAILURE);
  }

  kernel->next_proc_id = 1; // ID do proximo processo.
  // kernel->proc_table = list_init(); // Inicializa a lista de processos (proc_table) como uma lista vazia.

  segment_table_init(&kernel->seg_table);
  scheduler_init(&kernel->scheduler); // Inicializa o escalonador de processos.
  semaphore_table_init(&kernel->sem_table);

  sem_init(&mutex, 0, 1);
}

