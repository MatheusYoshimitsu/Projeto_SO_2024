// Etore Xavier
// Matheus Yoshimitsu Tamashiro Pires Lanzo
#include <stdio.h>
#include "main.h"

int main(){
    ProgramHeader teste;

    teste.program_name = "sint";
    teste.segment_id = 1;
    teste.original_priority = 3;
    teste.segment_size = 10;
    teste.semaphores_list = "s t";

    printf("Program name: %s\n", teste.program_name);
    printf("Segment ID: %d\n", teste.segment_id);
    printf("Original Priority: %d\n", teste.original_priority);
    printf("Segment Size: %d\n", teste.segment_size);
    printf("Semaphores List: %s\n", teste.semaphores_list);

    FILE *input_file = fopen("synthetic_2.txt", "r");

    if(!input_file){
        printf("\nERROR: FILE NOT FOUND\n\n");
        return;
    }
    
    ProgramHeader header = readHeader(header, "synthetic_2.txt");

    return 0;
}

ProgramHeader readHeader(ProgramHeader header, FILE *file){
    
}