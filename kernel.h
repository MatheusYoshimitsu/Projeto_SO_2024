#include <semaphore.h>

#include "scheduler.h"
#include "semaphores.h"
#include "process.h"
#include "memory.h"

typedef enum{
    PROCESS_INTERRUPT = 1, // Interrupcao gerada pelo final do quantum time
    PROCESS_CREATE = 2,    // Chamada para iniciar a criacao de um processo no BCP
    PROCESS_FINISH = 3,    // Chamada para chamada para terminar a existência de um processo no BCP
    // DISK_REQUEST = 4,      // Chamada de operação de entrada/saída para disco
    // DISK_FINISH = 5,       // Sinalização de final de E/S para disco
    MEM_LOAD_REQ = 6,      // Chamada de operação de carregamento na memória
    MEM_LOAD_FINISH = 7,   // Sinalização de final de carregamento
    // FS_REQUEST = 8,        // Chamada para operação no sistema de arquivos
    // FS_FINISH = 9,         // Sinalização de final de operação no sistema de arquivos
    SEMAPHORE_P = 10,      // Tratamento de bloqueio de processo
    SEMAPHORE_V = 11       // Tratamento de desbloqueio de processo
    // PRINT_REQUEST = 14,    // Chamada de operação de entrada/saída para impressão
    // PRINT_FINISH = 15      // Sinalização de final de E/S para impressão
} KernelEvent;

typedef struct {
    int next_proc_id;
    
  list_t *proc_table;  // segment_table_t seg_table; // vem de memory.h
    // scheduler_t scheduler; // vem de scheduler.h
    // semaphore_table_t sem_table; // vem de semaphores.h
} kernel_t;

void kernel_init(void);
void sysCall(KernelEvent, void *);
void interruptControl(KernelEvent, void *);
